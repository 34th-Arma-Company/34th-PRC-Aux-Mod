param (
	[switch]$SkipPause
)
try {

	$configVersion = 2;

	$defaultConfig = "{
	`"configVersion`": "+$configVersion+",
	`"parallelise`": true,
	`"pboPackCommand`": `"C:\\Program` Files\\PBO` Manager` v.1.4` beta\\PBOConsole.exe`",
	`"cfgConvertCommand`": `"C:\\Program Files (x86)\\Steam\\steamapps\\common\\Arma 3 Tools\\CfgConvert\\CfgConvert.exe`"
}"

	$configFile = "./build-config.json"

	if ((Test-Path $configFile) -eq $false) {
		Set-Content -Path $configFile -Value $defaultConfig -ErrorAction Stop
		Write-Warning ("Generated ``"+$configFile+"`` file, please check that it is correct then run this build script again")
		Pause
		return
	}

	$config = Get-Content $configFile -Encoding UTF8 -Raw -ErrorAction Stop | ConvertFrom-Json -ErrorAction Stop

	if(($null -eq $config.configVersion) -or ($config.configVersion -ne $configVersion)){
		Write-Warning ("Config file out of date. Delete or update your ``"+$configFile+"`` and restart the build.")
		Pause
		return
	}

	if(-not (Test-Path $config.pboPackCommand)){
		Write-Warning ("Could not find pbo packer at ``"+$config.pboPackCommand+"``. Check your ``"+$configFile+"`` file.")
		Pause
		return
	}

	Write-Output "Coping files to build folder"
	if(Test-Path "./build/") {
		Remove-Item "./build/*" -Recurse -Force -Confirm:$false -ErrorAction Stop
	} else {
		New-Item -ItemType Directory -Path "./build" | out-null
	}
	New-Item -ItemType Directory -Path "./build/addons" | out-null
	Copy-Item -Path "34thPRC_logo.paa" -Destination "./build" -Force -ErrorAction Stop
	Copy-Item -Path "changelog.md" -Destination "./build" -Force -ErrorAction Stop
	Copy-Item -Path "mod.cpp" -Destination "./build" -Force -ErrorAction Stop

	$foldersToPack = Get-ChildItem "./addons" -Directory

	if($null -ne $config.cfgConvertCommand -and $config.cfgConvertCommand -ne "" -and (Test-Path $config.cfgConvertCommand))
	{
		Write-Output "Validating config files"
		Push-Location
		$hadError = $false
		foreach($folder in $foldersToPack){
			Set-Location $folder.FullName
			$errors = (& "$($config.cfgConvertCommand)" "-test" "./config.cpp") 2>&1
			if($errors -ne $null){
				$hadError = $true
				Write-Warning ("Errors in config for "+$folder.Name)
				foreach($err in $errors)
				{
					Write-Warning ($err)
				}
			}
		}
		Pop-Location
		if ($hadError)
		{
			throw "Aborting build due to config errors"
		}
		else
		{
			Write-Output "Config files look valid"
		}
	}
	else
	{
		Write-Warning ("Could not find CfgConvert at ``"+$config.cfgConvertCommand+"``. Skipping config validation.")
		Write-Warning ("If you have CfgConvert installed then you can add its path to the ``"+$configFile+"`` file to enable config validation.")
	}

	if($config.parallelise){

		$buildPboCodeBlock = {
			Param($workingDirectory, $folder, $command)

			Set-Location $workingDirectory
			$folderName = $folder.Name
			$pboName = $folderName+".pbo"
			Start-Process "$($command)" "-pack", ("./addons/"+$folderName), ("./build/addons/"+$pboName) -NoNewWindow -Wait
		}

		$jobs = @()
		$command = $config.pboPackCommand
		$workingDirectory = Get-Location

		foreach($folder in $foldersToPack){
			$running = @(Get-Job | Where-Object { $_.State -eq 'Running' })
			if ($running.Count -ge 1) {
				$running | Wait-Job -Any | Out-Null
			}
			Write-Output ("Starting background build for "+$folder.Name+".pbo")
			$jobs += Start-Job -Scriptblock $buildPboCodeBlock -ArgumentList $workingDirectory, $folder, $command
		}

		Write-Output "Waiting for background builds to finish"
		Wait-Job $jobs | Out-Null

		foreach($job in $jobs)
		{
			if ($job.State -eq 'Failed') {
				Write-Error ($job.ChildJobs[0].JobStateInfo.Error.Description)
			} else {
				Write-Output (Receive-Job $job)
			}
		}

		foreach($folder in $foldersToPack){
			$folderName = $folder.Name
			$pboName = $folderName+".pbo"
			if(-not (Test-Path ("./build/addons/"+$pboName))){
				throw ("Failed to pack ``./build/addons/"+$pboName+"``\n"+$error)
			}
		}

		Remove-Job $jobs
	}
	else{

		foreach ($folder in $foldersToPack) {
			$folderName = $folder.Name
			$pboName = $folderName+".pbo"
			Write-Output ("Building "+$pboName)
			& "$($config.pboPackCommand)" "-pack" ("./addons/"+$folderName) ("./build/addons/"+$pboName) | out-null
			if(-not (Test-Path ("./build/addons/"+$pboName))){
				throw ("Failed to pack ``"+"./build/addons/"+$pboName+"``")
			}
		}
	}

	Write-Output "Build complete"
	if($SkipPause -eq $false) {
		Pause
	}
}
catch {
	Write-error ($_)
	pause
	throw $_
}
