#include <NewPing.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
NewPing sensor (11,12,30);
long jarak; //float untuk nilai 0.00, kalau mau tanpa .00 ganti jadi long
int led = 7;
int buzzer = 8;



void setup()
{
  Serial.begin(9600);          // Inisialisasi komunikasi serial dengan kecepatan 9600 bps
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(1,0);      //baris,kolom = baris 0 (atas), kolom pertama
  lcd.print("Radar Harimau");
  lcd.setCursor(2,1);
  lcd.print("Telah Menyala");   //baris,kolom = baris 1 (bawah), kolom kedua
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);         // Set kursor ke baris 0, kolom 0
  lcd.print("Jarak: ... Meter");  // Tampilkan teks "Jarak:     cm" di LCD
  lcd.setCursor(0, 1);         // Set kursor ke baris 1, kolom 0
  lcd.print("Status: Memeriksa");        // Tampilkan teks "Status: " di LCD
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);         // Set kursor ke baris 0, kolom 0
  lcd.print("Jarak: ... Meter");  // Tampilkan teks "Jarak:     cm" di LCD
  lcd.setCursor(0, 1);         // Set kursor ke baris 1, kolom 0
  lcd.print("Status: Aman!");        // Tampilkan teks "Status: " di LCD
  lcd.clear();
}



void loop()
{
  jarak=sensor.ping_cm();
  lcd.setCursor(0,0);
  lcd.print("jarak: ");
  lcd.println(jarak);
  lcd.println(" meter");
  delay(1000);
 
//  digitalWrite(led, LOW);     // Set Mati LED merah
  digitalWrite(buzzer, LOW);     // Set Mati Buzzer merah
//  lcd.clear();

  if (jarak >= 20 && jarak <= 30) {
    lcd.setCursor(0, 1);            // Set kursor ke baris 1, kolom 0
    lcd.print("Status: Aman !!!");  // Tampilkan "Status: Aman" di LCD
  } else if (jarak >= 10 && jarak <= 20) {
    lcd.clear();
    lcd.setCursor(0, 1);            // Set kursor ke baris 1, kolom 0
    lcd.print("Status: Hati2");     // Tampilkan "Status: Pelan2" di LCD
    digitalWrite(led, HIGH);     // Hidupkan LED merah
    delay(200);                      // Tahan LED Merah selama 200 ms
    digitalWrite(led, LOW);     // Matikan LED merah
    delay(200);                      // Jeda 200 ms
  } else if (jarak >= 1 && jarak <= 10) {
    lcd.clear();
    digitalWrite(led, HIGH);     // Hidupkan LED merah
    digitalWrite(buzzer, HIGH);     // Hidupkan Buzzer merah
    lcd.setCursor(0, 1);            // Set kursor ke baris 1, kolom 0
    lcd.print("Harimau Menerkam");     // Tampilkan "Awas Nabrak Bro" di LCD
    delay(2000);
  } else {
  lcd.clear();
  lcd.setCursor(0, 1);         // Set kursor ke baris 1, kolom 0
  lcd.print("Status: OK Aman");        // Tampilkan teks "Status: " di LCD
  }
  delay(100); // Jeda 100 ms sebelum membaca sensor lagi
}
