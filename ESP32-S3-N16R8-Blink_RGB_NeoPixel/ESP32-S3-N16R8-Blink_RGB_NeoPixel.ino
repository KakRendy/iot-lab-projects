#include <Adafruit_NeoPixel.h>
 
// Mendefinisikan pin untuk LED
#define LED_TX_PIN 43      // Pin untuk LED TX
#define LED_RX_PIN 44      // Pin untuk LED RX
#define RGB_LED_PIN 48     // Pin untuk LED WS2812 RGB
 
// Mendefinisikan jumlah LED RGB (diasumsikan 1 LED WS2812)
#define NUM_RGB_LEDS 1     // Jumlah LED WS2812 (1 LED dalam contoh ini)
 
// Membuat instance dari kelas Adafruit_NeoPixel
Adafruit_NeoPixel rgb_led = Adafruit_NeoPixel(NUM_RGB_LEDS, RGB_LED_PIN, NEO_GRB + NEO_KHZ800);
 
void setup() {
  // Menginisialisasi komunikasi serial
  Serial.begin(115200);  // Menginisialisasi komunikasi serial dengan baud rate 115200
}
 
void loop() {
  rgb_led.setPixelColor(0, rgb_led.Color(255, 0, 0));  // Set LED pertama ke warna merah
  rgb_led.show();  // Memperbarui warna LED
  delay(1000);      // Tunggu 1000 ms atau 1 detik
 
  // Set LED RGB ke hijau
  rgb_led.setPixelColor(0, rgb_led.Color(0, 255, 0));  // Set LED pertama ke warna hijau
  rgb_led.show();  // Memperbarui warna LED
  delay(1000);      // Tunggu 1000 ms atau 1 detik
 
  // Set LED RGB ke biru
  rgb_led.setPixelColor(0, rgb_led.Color(0, 0, 255));  // Set LED pertama ke warna biru
  rgb_led.show();  // Memperbarui warna LED
  delay(1000);      // Tunggu 1000 ms atau 1 detik

}
