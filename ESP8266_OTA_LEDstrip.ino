#include <Arduino.h>
#include "identification.h"

// WiFi Server stuff and WiFi logon Credentials
const char *SSID = "SSID";
const char *PASSWORD = "PASSWORD";

// OTA stuff included here
String projectTitle = "OTA_Template";
String projectDesc =
    "A Template for OTA updating via a website</p>";

void setup() {
    Serial.begin(115200); // initialize serial

    // Everything for OTA updates
    otaInit();
}

// Nothing to see here. No, really.
void loop() {

}
