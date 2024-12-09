//#define FASTLED_ESP32_I2S 1
#include <FastLED.h>
// #include <I2SClocklessLedDriver.h>
// #include <AsyncTCP.h>
// #include <ESPAsyncWebServer.h>
// #include <ArduinoJson.h>

// AsyncWebServer ws(80);
// JsonDocument doc;
CRGB leds[1];

void setup() {
    Serial.begin(115200);
    Serial.println("Setup");
    FastLED.addLeds<NEOPIXEL, 8>(leds, 1);
}
void loop() {
    Serial.print(".");
    leds[0] = CRGB::Blue;
    FastLED.delay(1000);
    leds[0] = CRGB::Red;
    FastLED.delay(1000);
}
