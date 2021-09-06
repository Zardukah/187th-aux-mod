@echo off
echo Building
"%ProgramFiles%\PBO Manager v.1.4 beta\PBOConsole.exe" -pack ".\Edit Area\187th-aux" ".\@187th TestAuxMod\addons\187th-aux.pbo"
echo Finished
DEL ".\@187th TestAuxMod\addons\187th-aux.pbo.bak"
echo Removing Bak
pause