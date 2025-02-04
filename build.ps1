param (
	[switch]$SkipPause
)
try {

	# TODO download hemtt
	# TODO run the correct hemtt for the OS platform

	./meta/tools/hemtt/hemtt.exe build

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
