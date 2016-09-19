#include <ESP8266WiFi.h>
uint8_t  MAC_softAP[]          = {0,0,0,0,0,0};                      //not sure why we have to pass a MAC address to get a MAC address.
uint8_t  MAC_STA[]                = {0,0,0,0,0,0};

void setup() {
    Serial.begin(115200);
    Serial.println();
    
    Serial.print("MAC[SoftAP]");
    uint8_t* MAC  = WiFi.softAPmacAddress(MAC_softAP);                   //get MAC address of softAP interface
    for (int i = 0; i < sizeof(MAC)+2; ++i){                                                          //this line needs cleaning up.
         Serial.print(":");
         Serial.print(MAC[i],HEX);
         MAC_softAP[i] = MAC[i];                                         //copy back to global variable
    }
    Serial.println();
    Serial.print("MAC[STA]");
    MAC  = WiFi.macAddress(MAC_STA);                   //get MAC address of STA interface
    for (int i = 0; i < sizeof(MAC)+2; ++i){
         Serial.print(":");
         Serial.print(MAC[i],HEX);
         MAC_STA[i] = MAC[i];                                            //copy back to global variable
    }
    Serial.println();
}

void loop() {
}
