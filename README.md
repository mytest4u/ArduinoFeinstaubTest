# ArduinoFeinstaubTest
SDS011 dust sensor example
Test auf nano
Sensor:  SDS011    TxD (D1) an SRX Sensor  und  RxD  (D0) an STX Sensor
Display: SSD1306   A4 an SDA-Display und  A5  an SCL Display
Importent ! --> Display vor jedem hochladen von der Spannung trennen !
#include <SDS011.h> // Angepasste Auflösung #define SSD1306_128_32 in SDS011.d anpassen
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

