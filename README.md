# LED strip/matrix controller

This project uses an ESP8266 to drive a matrix of 24x24 LEDs made from a WS2811 
RGB 12 V strip.

### Requirements
- Add the ESP8266 board to the Arduino IDE: https://arduino.esp8266.com/stable/package_esp8266com_index.json
- Download the [ESPAsyncWebServer library](https://github.com/me-no-dev/ESPAsyncWebServer) 
as a zip and add it to the project. It is not in the library manager so you have to download and 
install the .zip
- Install [ESPAsyncTCP](https://github.com/me-no-dev/ESPAsyncTCP). It should be available in the
Arduino library
- Install [AsyncTCP](https://github.com/me-no-dev/AsyncTCP). It should be available in the Arduino
library


### Links
- I have to give credit to Ralph S Bacon for the OTA code. Thanks to his 
[YouTube video](https://youtu.be/OaHzlBTUrRQ) to get the project going such
that we can update it remotely.
