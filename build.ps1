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
	Copy-Item -Path ".\src\Addons\Keys\22nd RDF.bikey" -Destination ".\build\Addons\Keys\22nd RDF.bikey" -Force -ErrorAction Stop

	$foldersToPack = Get-ChildItem ".\src\Addons" | Where-Object {$_.Name -ne "Keys"}
	foreach ($folder in $foldersToPack) {
		$folderName = $folder.Name
		$pboName = $folderName+".pbo"
		Write-Output ("Building "+$pboName)
		& "$($config.pboPackCommand)" "-pack" (".\src\Addons\"+$folderName) (".\build\Addons\"+$pboName) | out-null
		if(-not (Test-Path (".\build\Addons\"+$pboName))){
			throw ("Failed to pack ``"+".\build\Addons\"+$pboName+"``")
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
