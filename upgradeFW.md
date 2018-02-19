#How to - Upgrade iSpindel firmware
### If you are running 5.xx you can update via ad-hoc network (192.168.4.1)

<ul>
  <li>1. OTA Upgrade - fw newer then 5.x.x </li>
  <li>2. Manual upgrade - fw older then 5.o.0</li>
</ul>

### 1. OTA Upgrade - fw newer then 5.x.x 


### 2. Manual upgrade - fw older then 5.o.0
1. Download the latest .bin-file of iSpindel -> <a href='https://github.com/universam1/iSpindel/releases'>Link</a></br>
2. Download ESP8266Flasher -> 
<a href='https://github.com/nodemcu/nodemcu-flasher/blob/master/Win32/Release/ESP8266Flasher.exe'>Link x32</a></br>
<a href='https://github.com/nodemcu/nodemcu-flasher/blob/master/Win64/Release/ESP8266Flasher.exe'>Link x64</a></br>
3. Connect iSpindel to your computer (USB) and switch it on</br>
4. Start ESP8266Flasher</br>
4a. Go to "Operation"-tab: Choose COM-port for iSpindel</br>
4b. Go to "Config"-tab: On the first line, brows to the downloaded .bin-file</br>
5. Go to "Operation"-tab:Choose "Flash" and wait for it to finish</br>
6. Turn the iSpindel off</br>
7. Disconnect iSpindel from USB</br>
8. Turn the iSpindel on and wait 30 seconds</br>
9. Done!</br>
