//ici ce trouve le prog des pots

#include <ArduinoOTA.h>

const char* ssid = "identité_du_routeur";  // Généralement, "routeur" = "box"
const char* password = "mot_de_passe_du_routeur";

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
