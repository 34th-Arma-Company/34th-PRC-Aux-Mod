@echo off
IF "%~1"=="-skippause" (
	powershell -executionpolicy bypass -File .\build.ps1 -skippause
) ELSE (
	powershell -executionpolicy bypass -File .\build.ps1
)
