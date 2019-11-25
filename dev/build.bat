@echo off

:: Time build START
:: Reference: https://stackoverflow.com/questions/673523/how-do-i-measure-execution-time-of-a-command-on-the-windows-command-line
set _time=%time: =0%
set /a _hours=100%_time:~0,2%%%100,_min=100%_time:~3,2%%%100,_sec=100%_time:~6,2%%%100,_cs=%_time:~9,2%
set /a _started=_hours*60*60*100+_min*60*100+_sec*100+_cs



:: Content
::folder2c ..\gfx gfx
::sdcc -c -mz80 --opt-code-speed --peep-file peep-rules.txt --std-c99 gfx.c

::folder2c ..\psg psg
::sdcc -c -mz80 --opt-code-speed --peep-file peep-rules.txt --std-c99 psg.c


:: Compile
::cd devkit
::sdcc -c -mz80 --opt-code-speed --peep-file ..\peep-rules.txt --std-c99 _sms_manager.c
::sdcc -c -mz80 --opt-code-speed --peep-file ..\peep-rules.txt --std-c99 _snd_manager.c
::cd ..

REM cd engine
REM sdcc -c -mz80 --opt-code-speed --peep-file ..\peep-rules.txt --std-c99 asm_manager.c
REM sdcc -c -mz80 --opt-code-speed --peep-file ..\peep-rules.txt --std-c99 content_manager.c
REM sdcc -c -mz80 --opt-code-speed --peep-file ..\peep-rules.txt --std-c99 font_manager.c
REM sdcc -c -mz80 --opt-code-speed --peep-file ..\peep-rules.txt --std-c99 input_manager.c
REM sdcc -c -mz80 --opt-code-speed --peep-file ..\peep-rules.txt --std-c99 player_manager.c
REM sdcc -c -mz80 --opt-code-speed --peep-file ..\peep-rules.txt --std-c99 screen_manager.c
REM sdcc -c -mz80 --opt-code-speed --peep-file ..\peep-rules.txt --std-c99 tile_manager.c
REM cd ..

sdcc -c -mz80 --opt-code-speed --peep-file peep-rules.txt --std-c99 main.c


:: Time build -END-
set _time=%time: =0%
set /a _hours=100%_time:~0,2%%%100,_min=100%_time:~3,2%%%100,_sec=100%_time:~6,2%%%100,_cs=%_time:~9,2%
set /a _duration=_hours*60*60*100+_min*60*100+_sec*100+_cs-_started
set /a _hours=_duration/60/60/100,_min=100+_duration/60/100%%60,_sec=100+(_duration/100%%60%%60),_cs=100+_duration%%100
echo.
echo Time taken: %_sec:~-2%.%_cs:~-2% secs
echo.


:: Link
sdcc -o output.ihx --Werror --opt-code-speed -mz80 --no-std-crt0 --data-loc 0xC000 ^
..\crt0\crt0_sms.rel main.rel ^
..\lib\SMSlib.lib ^
..\lib\PSGlib.rel ^
devkit\_sms_manager.rel ^
devkit\_snd_manager.rel ^
gfx.rel ^
psg.rel


:: Execute
ihx2sms output.ihx output.sms

:: Copy
cp output.sms ..\asm

:: Delete
cd devkit
if exist "*.asm" del "*.asm" > nul
if exist "*.lst" del "*.lst" > nul
if exist "*.sym" del "*.sym" > nul
cd ..

cd engine
if exist "*.asm" del "*.asm" > nul
if exist "*.lst" del "*.lst" > nul
if exist "*.sym" del "*.sym" > nul
cd ..

if exist "*.asm" del "*.asm" > nul
if exist "*.ihx" del "*.ihx" > nul
if exist "*.lk"  del "*.lk"  > nul
if exist "*.lst" del "*.lst" > nul
if exist "*.noi" del "*.noi" > nul
if exist "*.sym" del "*.sym" > nul

:: Run
::java -jar C:\SEGA\Emulicious\Emulicious.jar output.sms
output.sms