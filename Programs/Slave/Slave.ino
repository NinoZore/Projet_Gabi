//ici ce trouve le prog des pots

#include <ArduinoOTA.h>

const char* ssid = "GabiGarden";  // Généralement, "routeur" = "box"
const char* password = "iL0VEfl0werWH0canSPEAK0urLANGUAGE";
// 0-4095
int capteurHygro = 2000;
int capteurTempérature = 3000;
int capteurLuminosité = 1000;
int capteurBatterie = 4000;

void setup() 
{
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) 
  {
    delay(1000);
    ESP.restart();
  }
  ArduinoOTA.begin();
}

void loop()
{
  ArduinoOTA.handle();
}
