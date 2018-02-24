/**************************************************************

    "iSpindel"
    changes by S.Lang <universam@web.de>

 **************************************************************/



#ifndef _INFLUXDB_H_
#define _INFLUXDB_H_

#include <ESP8266WiFi.h>
#include <ArduinoJson.h>         //https://github.com/bblanchon/ArduinoJson
#include <WiFiUdp.h>



#define TCPort 8888

typedef struct TCValue {
  char  * id;
  float value_id;
} tValue;


class Influxdb {
 public:
    Influxdb(char* device, char* server, uint16_t port);
    bool send();
    bool send(uint8_t count);
    void add(char *variable_id, float value);
    ~Influxdb();
    
 private:
    WiFiUDP Udp;
    char* _device;
    char* _server;
    uint16_t _port;
    uint8_t maxValues;
    uint8_t currentValue;
    tValue * val;
    WiFiClient _client;
};

#endif
