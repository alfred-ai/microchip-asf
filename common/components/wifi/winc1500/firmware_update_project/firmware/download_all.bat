@ECHO off
:: %1 type of bus
:; %2 type of layout (SAMW25)
:: %3 port number 
:: %4 (-B) break command will use port number to send break command 	
::0 means try to get available port number and if failed will prompt user to enter it	
SET FIRMWARE_3A0_PATH=../../../firmware/m2m_aio_3a0.bin		

SET OTA_3A0=../../../ota_firmware/m2m_ota_3a0.bin

SET CA_DIR=../../../tls_cert_store/CA
SET TLS_RSA_KEY=../../../tls_cert_store/winc_rsa.key
SET TLS_RSA_CRT=../../../tls_cert_store/winc_rsa.cer
SET TLS_ECDSA_CRT=../../../tls_cert_store/winc_ecdsa.cer

echo Mode %1
if "%1" == "UART"  Goto contine_UART
if "%1" == "I2C"   Goto contine_I2C
if "%1" == "OTA"   Goto contine_OTA
	echo Define the mode (I2C/UART/OTA)
	pause 
	exit

:contine_I2C
Set  FMode=debug_i2c
set Mode=I2C
goto START

:contine_OTA
Set  FMode=debug_ota
set Mode=OTA
goto START

:contine_UART
Set  FMode=debug_uart
set Mode=UART
goto START

:START
IF %FMode%==debug_ota (echo Creating Image...
cd Tools\image_builder\debug\
@ECHO off
image_builder -1003A0 -no_wait -ota_img  %OTA_3A0% -fw_path ../../../firmware/wifi_v111/ASIC_3A0/wifi_firmware.bin -op_path %FIRMWARE_3A0_PATH% -ate_img ../../../ate_firmware/m2m_ate.bin 
IF %ERRORLEVEL% NEQ  0 goto END
echo OK
goto END
)
cd Tools\image_downloader\%FMode%
echo Downloading Image...
image_downloader.exe -no_wait -port %3 -fw3a0_path %FIRMWARE_3A0_PATH% %4
IF %ERRORLEVEL% NEQ  0 goto END
cd ..\..\gain_builder\%FMode%
echo Downloading Gain Values...
if "%2" == "SAMW25" ( Set GAIN_FILE=-hp ../gain_sheets/samw25_gain_setting_hp.csv
goto DOWNLOAD_GAIN
)
::Set GAIN_FILE=-hp ../gain_sheets/samd21_gain_setting_hp.csv -lpvbat1 ../gain_sheets/samd21_gain_setting_lp_VBAT1.csv
Set GAIN_FILE=-hp ../gain_sheets/samd21_gain_setting_hp.csv 
:DOWNLOAD_GAIN
gain_builder.exe %GAIN_FILE% -no_wait -port %3 %4
IF %ERRORLEVEL% NEQ  0 goto END

cd ..\..\..\Tools\tls_cert_flash_tool\%FMode%
echo Downloading WINC TLS Certificate Materials...
:DOWNLOAD_SRV_CERT
tls_cert_flash_tool.exe WRITE -key %TLS_RSA_KEY% -cert %TLS_RSA_CRT% -cadir %CA_DIR% -erase -nowait
tls_cert_flash_tool.exe WRITE -nokey -cert %TLS_ECDSA_CRT% -cadir %CA_DIR% -nowait

cd ..\..\..\Tools\root_certificate_downloader\%FMode%
echo Downloading root certificates...
:DOWNLOAD_ROOT_CERT 
setlocal EnableDelayedExpansion
set /a c = 0
set seq=
for %%X in (..\binary\*.cer) do (
	set /a c+=1
	@set seq=!seq! %%X
)
root_certificate_downloader.exe -n %c% %seq% -no_wait -port %3 -e %4
:END
IF %ERRORLEVEL% NEQ  0 ( echo Fail
echo     #######################################################################
echo     ##                                                                   ##
echo     ##                    ########    ###     ####  ##                   ##
echo     ##                    ##         ## ##     ##   ##                   ##
echo     ##                    ##        ##   ##    ##   ##                   ##
echo     ##                    ######   ##     ##   ##   ##                   ##
echo     ##                    ##       #########   ##   ##                   ##
echo     ##                    ##       ##     ##   ##   ##                   ##
echo     ##                    ##       ##     ##  ####  ########             ##
echo     ##                                                                   ##
echo     #######################################################################  
pause  
exit
)
)

echo OK
echo     #######################################################################
echo     ##                                                                   ##
echo     ##                 ########     ###     ######   ######              ##
echo     ##                 ##     ##   ## ##   ##    ## ##    ##             ##
echo     ##                 ##     ##  ##   ##  ##       ##                   ##
echo     ##                 ########  ##     ##  ######   ######              ##
echo     ##                 ##        #########       ##       ##             ##
echo     ##                 ##        ##     ## ##    ## ##    ##             ##
echo     ##                 ##        ##     ##  ######   ######              ##
echo     ##                                                                   ##
echo     #######################################################################

echo Downloading ends successfully
pause
