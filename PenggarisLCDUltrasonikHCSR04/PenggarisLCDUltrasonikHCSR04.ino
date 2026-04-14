#include <NewPing.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
NewPing sensor (11,12,30);
float jarak; //float untuk nilai 0.00, kalau mau tanpa .00 ganti jadi long

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello, world!");
  lcd.setCursor(1,1);
  lcd.print("ARDUINO");
  delay(2000);
  lcd.clear();

}


void loop()
{
  jarak=sensor.ping_cm();
  lcd.setCursor(0,0);
  lcd.print("jarak: ");
  lcd.setCursor(0,1);
  lcd.print(jarak);
  lcd.println(" meter");
  delay(1000);
}
