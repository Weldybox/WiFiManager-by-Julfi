#include "Arduino.h"
#include <ESP8266WiFi.h>          //https://github.com/esp8266/Arduino
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManagerByWeldy.h>


void setup() {
    // put your setup code here, to run once:
    Serial.begin(115200);

    //WiFiManager
    WiFiManager wifiManager;

    //Non de l'AP au comment de la connexion
    wifiManager.autoConnect("Webportail");
    //Ou on utilise ça pour générer aléatoirement un nom avec un ChipID
    //wifiManager.autoConnect();

    
    //Si l'on est connecté au WiFi on aura ce message :)
    Serial.println("connected...yeey :)");
}

void loop() {
    // put your main code here, to run repeatedly:
    
}
