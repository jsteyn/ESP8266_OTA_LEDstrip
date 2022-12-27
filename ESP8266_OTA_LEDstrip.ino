#include <Arduino.h>
#include "identification.h"
#include "arduino_secrets.h"
#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN 2
// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 6
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100;  // delay for half a second
// WiFi Server stuff and WiFi logon Credentials
const char *SSID = SECRET_SSID;
const char *PASSWORD = SECRET_PASS;

// OTA stuff included here
String projectTitle = "LED matrix OTA updater";
String projectDesc =
  "LED matrix 24x24</p>";

void setup() {
  Serial.begin(115200);  // initialize serial
  pixels.begin();        // This initializes the NeoPixel library.
  pixels.clear();
  pixels.show();
  // Everything for OTA updates
  otaInit();
}

// Nothing to see here. No, really.
void loop() {
  for (int i = 0; i < NUMPIXELS; i++) {
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    pixels.show();
    delay(delayval);
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    pixels.show();
    delay(delayval);
    pixels.setPixelColor(i, pixels.Color(0, 0, 255));
    pixels.show();
    delay(delayval);
  }
}
