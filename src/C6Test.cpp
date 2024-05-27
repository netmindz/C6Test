#include <FastLED.h>
// #include <I2SClocklessLedDriver.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <ArduinoJson.h>

AsyncWebServer ws(80);
JsonDocument doc;
CRGB leds[1];

void setup() {}
void loop() {}
