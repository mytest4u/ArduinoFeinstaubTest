# ArduinoFeinstaubTest
SDS011 dust sensor example

Notwendige Biblieotheken / Librarie: 
Adafruit_SSD1306-master.zip --> #include <Adafruit_SSD1306.h>
Auflösung über #define SSD1306_128_32 in SDS011.d anpassen oder hier herunterladen.


SDS011-Master.zip   -->  #include <SDS011.h>
Falls noch nicht erfolgt, herunterladen und in Entwicklungsumgebung einbinden.

Test auf nano

Sensor:  SDS011    TxD (D1) an SRX Sensor  und  RxD  (D0) an STX Sensor
Display: SSD1306   A4 an SDA-Display und  A5  an SCL Display
Importent ! --> Display vor jedem hochladen von der Spannung trennen !


Nach Begrüßung erfolgt die Ausgabe der Messwerte auf Display.
