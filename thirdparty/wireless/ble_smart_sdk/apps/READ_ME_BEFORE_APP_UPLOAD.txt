with b0 board, generated project will be run with below works.

1.Add below line in Project property -> Build Events -> Post-build event command line
"C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.75\tools\samb_makeimage.bat" "C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.75\patches" "$(OutputDirectory)\$(OutputFileName).bin"  app_entry

2. Add below line in Project property -> Tool -> External programming tool
"C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.75\tools\SambFlashTool.exe" write -i "$(OutputDirectory)\$(OutputFileName).img" -n $(avrtoolserialnumber) -c $(avrtoolinterfaceclock) -p $(avrdeviceexpectedsignature)

3. add "CHIPVERSION_B0" to Toolchain -> symbols -> Defined symbols

(optional) 4. add "debughooks.py" file to project root. 



----temp ----



"C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.99\tools\samb_makeimage.bat" "C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.99\patches\patch.img" "$(OutputDirectory)\$(OutputFileName).bin"  app_entry _sstack _estack _sfixed

"C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.99\tools\SambFlashTool.exe" write -i "$(OutputDirectory)\$(OutputFileName).img" -n $(avrtoolserialnumber) -c $(avrtoolinterfaceclock) -p $(avrdeviceexpectedsignature)




"$(DEVICE_STARTUP_ROOT)\tools\samb_makeimage.bat" "$(DEVICE_STARTUP_ROOT)\patches\patch.img" "$(OutputDirectory)\$(OutputFileName).bin"  app_entry _sstack _estack _sfixed

"$(DEVICE_STARTUP_ROOT)\tools\SambFlashTool.exe" write -i "$(OutputDirectory)\$(OutputFileName).img" -n $(avrtoolserialnumber) -c $(avrtoolinterfaceclock) -p $(avrdeviceexpectedsignature)









"C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.100\tools\samb_makeimage.bat" "C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.100\patches\patch.img" "$(OutputDirectory)\$(OutputFileName).bin"  app_entry _sstack _estack _sfixed

"C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.100\tools\SambFlashTool.exe" write -i "$(OutputDirectory)\$(OutputFileName).img" -n $(avrtoolserialnumber) -c $(avrtoolinterfaceclock) -p $(avrdeviceexpectedsignature)





"C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.107\tools\samb_makeimage.bat" "C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.107\patches\patch.img" "$(OutputDirectory)\$(OutputFileName).bin"  app_entry _sstack _estack _sfixed

"C:\Program Files (x86)\Atmel\Studio\7.0\packs\atmel\SAMB11_DFP\1.0.107\tools\SambFlashTool.exe" write -i "$(OutputDirectory)\$(OutputFileName).img" -n $(avrtoolserialnumber) -c $(avrtoolinterfaceclock) -p $(avrdeviceexpectedsignature)


"$(PROJECT_BLEAPP_ROOT)\tools\samb_makeimage.bat" "$(PROJECT_BLEAPP_ROOT)\patches\patch.img" "$(OutputDirectory)\$(OutputFileName).bin"  app_entry _sstack _estack _sfixed
"$(PROJECT_BLEAPP_ROOT)\tools\SambFlashTool.exe" write -i "$(OutputDirectory)\$(OutputFileName).img" -n $(avrtoolserialnumber) -c $(avrtoolinterfaceclock) -p $(avrdeviceexpectedsignature)
