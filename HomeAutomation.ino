#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.

char auth[] = "f0934bb*******************7eff430";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "**********";
char pass[] = "**********";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}