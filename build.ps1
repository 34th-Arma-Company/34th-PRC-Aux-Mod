param (
	[switch]$SkipPause
)
try {

	$configVersion = 1;

	$defaultConfig = "{
	`"configVersion`": "+$configVersion+",
	`"pboPackCommand`": `"C:\\Program` Files\\PBO` Manager` v.1.4` beta\\PBOConsole.exe`"
}"

	$configFile = ".\build-config.json"

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
	if(Test-Path ".\build\") {
		Remove-Item ".\build\*" -Recurse -Force -Confirm:$false -ErrorAction Stop
	} else {
		New-Item -ItemType Directory -Path ".\build" | out-null
	}
	Copy-Item -Path ".\src\*" -Destination ".\build" -Force -ErrorAction Stop
	New-Item -Path ".\build\Addons\Keys" -Force -ItemType "directory" -ErrorAction Stop | out-null

	$foldersToPack = Get-ChildItem ".\src\Addons" | Where-Object {$_.Name -ne "Keys"}

	$buildPboCodeBlock = {
		Param($folder, $command)

		Set-Location "C:\MyStuff\Projects\Arma 3 Modding\mods\34th PRC Aux Mod"
		$folderName = $folder.Name
		$pboName = $folderName+".pbo"
		Write-Output ("Building "+$pboName)
		Start-Process "$($command)" "-pack", (".\src\Addons\"+$folderName), (".\build\Addons\"+$pboName) -NoNewWindow -Wait
		if(-not (Test-Path (".\build\Addons\"+$pboName))){
			throw ("Failed to pack ``.\build\Addons\"+$pboName+"``\n"+$error)
		}
	}

	$jobs = @()
	$command = $config.pboPackCommand
	Write-Output $command

	foreach($folder in $foldersToPack){
		$running = @(Get-Job | Where-Object { $_.State -eq 'Running' })
		if ($running.Count -ge 1) {
			$running | Wait-Job -Any | Out-Null
		}
		Write-Output ("Starting background build for "+$folder.Name+".pbo")
		$jobs += Start-Job -Scriptblock $buildPboCodeBlock -ArgumentList $folder, $command
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

	Remove-Job $jobs

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
