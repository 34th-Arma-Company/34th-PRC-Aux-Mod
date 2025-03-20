#! /bin/bash
if [[ $* == *-skippause* ]]; then
	powershell -executionpolicy bypass -File ./build.ps1 -skippause
else
	powershell -executionpolicy bypass -File ./build.ps1
fi
