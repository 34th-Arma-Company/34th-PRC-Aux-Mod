# get user to edit changelog
Write-Host "Please edit the changelog.md file and save your changes."
if ($IsWindows -or [System.Environment]::OSVersion.Platform -eq "Win32NT") {
    Start-Process "changelog.md"
} elseif ($IsLinux -or $IsMacOS -or [System.Environment]::OSVersion.Platform -eq "Unix") {
    Start-Process "xdg-open" "changelog.md"
} else {
    Write-Host "Unsupported OS. Please manually open changelog.md in your preferred text editor."
}
Read-Host "Press Enter to continue after saving the changelog."

# extract new version number from changelog.md
$changelogContent = Get-Content "changelog.md"
$newVersionLine = $changelogContent | Select-String -Pattern "^## \d+\.\d+\.\d+" | Select-Object -First 1

if ($newVersionLine -eq $null) {
    Write-Host "Could not find a version number in changelog.md. Please enter the new version number (e.g., 0.27.0):"
    $newVersion = Read-Host
} else {
    $newVersion = $newVersionLine -replace "## ", ""
}

# split version number into major, minor, and patch
$versionParts = $newVersion -split "\."
$major = $versionParts[0]
$minor = $versionParts[1]
$patch = $versionParts[2]

# update version in script_version.hpp
$scriptVersionPath = "addons/main/script_version.hpp"
$scriptVersionContent = Get-Content $scriptVersionPath
$scriptVersionContent = $scriptVersionContent -replace "(?<=#define MAJOR )\d+", $major
$scriptVersionContent = $scriptVersionContent -replace "(?<=#define MINOR )\d+", $minor
$scriptVersionContent = $scriptVersionContent -replace "(?<=#define PATCH )\d+", $patch
Set-Content -Path $scriptVersionPath -Value $scriptVersionContent

Write-Host "Updated script_version.hpp to version $newVersion."
