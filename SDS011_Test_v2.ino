// SDS011 dust sensor example
// ------------------------------------------------------------------------------------
//
// By Stefan Burgard
//    MyTest4u
//    04.04.2018
//
// Test auf nano
// Sensor:  SDS011    TxD (D1) an SRX Sensor  und  RxD  (D0) an STX Sensor
// Display: SSD1306   A4 an SDA-Display und  A5  an SCL Display
// Importent ! --> Display vor jedem hochladen von der Spannung trennen !
// ------------------------------------------------------------------------------------

#include <SDS011.h> // Angepasste Auflösung #define SSD1306_128_32 in SDS011.d anpassen
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


float p10, p25;
int error;

SDS011 my_sds;

//------------------------------------------
#define OLED_RESET 4

Adafruit_SSD1306 display(OLED_RESET);




void setup() {
  my_sds.begin(0, 1);
  Serial.begin(9600);

  //------------------------------------------
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); //initialize with the I2C addr 0x3C
  display.clearDisplay();
 
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println(F("Feinstaub"));
  display.setTextSize(1);
  display.setCursor(10, 20);
  display.println(F("MyTest4u"));

  display.display();
  delay(2000);

}

void loop() {


  error = my_sds.read(&p25, &p10);
  if (! error) {
    //Serial.println("P2.5 : " + String(p25));
    //Serial.println("P10  : " + String(p10));

    display.clearDisplay();
    display.setCursor(0, 0);
    display.setTextSize(1);
   display.print("----- P2.5 -----");
   display.setCursor(0, 32); 
   display.print("----- P10  ----- "); 
   
    display.setTextSize(2);
    display.setCursor(1, 12);
    display.print(String(p25));

    display.setTextSize(2);
    display.setCursor(1, 44);
    display.print(String(p10));

  }
  display.display();
  delay(1000);
}
