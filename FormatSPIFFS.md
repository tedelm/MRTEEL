# How to format SPIFFS file area (Wemos D1 Mini/iSpindel)
<a href='https://github.com/tedelm/MRTEEL/blob/master/README.md'>Back to meny</a></br></br>

## !Note, use this guide or just update to ispindel 5.7.0 or higher and do a "Factory reset"!

### Doing the steps below can destroy your ispindel/wemos, but I have done it <10 times without any issues (MRTEEL version).

1. Download .bin-file -> <a href='https://github.com/tedelm/MRTEEL/blob/master/BIN/FormatSPIFFS/FormatSPIFFS_v1_WemosD1Mini.bin'>Link</a>
2. Download ESP8266Flasher -> 
<a href='https://github.com/nodemcu/nodemcu-flasher/blob/master/Win32/Release/ESP8266Flasher.exe'>Link x32</a>
<a href='https://github.com/nodemcu/nodemcu-flasher/blob/master/Win64/Release/ESP8266Flasher.exe'>Link x64</a>
3. Connect iSpindel to your computer (USB) and switch it on
4. Start ESP8266Flasher</br>
4a. Go to "Operation"-tab: Choose COM-port for iSpindel</br>
4b. Go to "Config"-tab: On the first line, brows to the downloaded .bin-file</br>
5. Go to "Operation"-tab:Choose "Flash" and wait for it to finish
6. Turn the iSpindel off
7. Disconnect iSpindel from USB
8. Turn the iSpindel on and wait 30 seconds
9. Do step 4-7 again but choose ispindel-fw .bin file to flash the iSpindel firmware back on to it. ->
<a href='https://github.com/universam1/iSpindel/releases'>Link to ispindel firmware</a>


#Arduino code
```
#include <FS.h>


void setup(){
  Serial.begin(115200);
  eraseCFGFILE();
}
void loop(){
  Serial.println("Loop"); 
  Serial.println(".");
  Serial.println(".");
}


void eraseCFGFILE(){

//Reset SPIFFS file
    Serial.println("Formatting CFGFILE");
	Serial.println(".");
	Serial.println(".");
	Serial.println(".");
    SPIFFS.begin();
    Serial.println(SPIFFS.format());
    SPIFFS.end();
    Serial.println("Format complete"); 
//
  
}

```
