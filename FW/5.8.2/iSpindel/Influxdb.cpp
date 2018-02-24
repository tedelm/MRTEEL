/**************************************************************

    "iSpindel"
    changes by S.Lang <universam@web.de>

 **************************************************************/
#include "Influxdb.h"
#define CONNTIMEOUT 3000 / 100

Influxdb::Influxdb( char* device, char* server, uint16_t port) {
    
    _device = device;
    _server = server;
    _port = port;
    maxValues = 5;
    currentValue = 0;
    val = (tValue *)malloc(maxValues*sizeof(tValue));
}

Influxdb::~Influxdb() { free(val); }

void Influxdb::add(char *variable_id, float value) {
    (val+currentValue)->id = variable_id;
    (val+currentValue)->value_id = value;
    currentValue++;
}

bool Influxdb::send() {
    return send(3);
}

bool Influxdb::send(uint8_t count) {
    uint16_t i;
    String msg;

    if (count == 0) return false;

    _client.setNoDelay(true); // test if solves dropped frames

    if (_client.connect(_server, TCPort)) {

    for (i = 0; i < currentValue; ) {
        msg += String((val + i)->id);
        msg += ": ";
        msg += String((val+i)->value_id);
        i++;
        if (i < currentValue) msg += " ";
    }

    // Serial.println(F("TConctrol UDP: sending"));
    // Serial.println(String("server: ") + _server + String(" Port: ") + TCPort);

    // Udp.beginPacket(_server, TCPort);
    // Udp.print(msg);
    // delay(10);
    // Udp.endPacket();
    // delay(10);
    // Serial.println(msg);

    Serial.println(F("Influxdb TCP: sending"));
    Serial.println(String("server: ") + _server + String(" Port: ") + TCPort);

      _client.println(msg);
      Serial.println(msg);

    //   while (_client.connected()) {
        while (_client.available()) {
          char c = _client.read();
          Serial.write(c);
        }
    //   }
      
    } else {
      Serial.println(F("\nERROR Influxdb: couldnt connect"));
      
    }

    int timeout = 0;
    while(!_client.available() && timeout < CONNTIMEOUT) {
        timeout++;
        Serial.println("wait");
        delay(100);
    }
    while (_client.available()) {
        char c = _client.read();
        Serial.write(c);
        if (c == 'T') {
            _client.stop();
            Serial.println("response ok");
            return true;
        }
    }
    _client.stop();
    return send(--count);
}
