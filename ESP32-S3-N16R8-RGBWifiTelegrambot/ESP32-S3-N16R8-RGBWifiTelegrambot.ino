#include <WiFi.h> // Untuk menghubungkan ESP32 ke jaringan Wi-Fi.
#include <WiFiClientSecure.h> // Untuk koneksi HTTPS aman dengan Telegram.
#include <UniversalTelegramBot.h>   // Library Telegram Bot
#include <Adafruit_NeoPixel.h> //mengimpor library Adafruit NeoPixel, kontrol LED RGB jenis WS2812

// Ganti dengan kredensial Wi-Fi Anda
const char* ssid = "xxx";
const char* password = "xxx";

// Token Bot Telegram Anda
#define BOTtoken "xxx"  // Ganti dengan token bot Anda
#define CHAT_ID "xxx"  // Ganti dengan ID chat Anda

// Pin untuk LED WS2812 RGB
#define RGB_LED_PIN 48
#define NUM_RGB_LEDS 1 // Jumlah LED RGB

WiFiClientSecure client;
UniversalTelegramBot bot(BOTtoken, client);

// Membuat instance dari kelas Adafruit_NeoPixel
Adafruit_NeoPixel rgb_led = Adafruit_NeoPixel(NUM_RGB_LEDS, RGB_LED_PIN, NEO_GRB + NEO_KHZ800);

// Interval waktu untuk pengecekan bot (dalam milidetik)
int botRequestDelay = 1000;
unsigned long lastTimeBotRan;

// Fungsi untuk menangani pesan baru
void handleNewMessages(int numNewMessages) {
  for (int i = 0; i < numNewMessages; i++) {
    String chat_id = String(bot.messages[i].chat_id);
    if (chat_id != CHAT_ID) {
      bot.sendMessage(chat_id, "Pengguna tidak sah / Unauthorized user", "");
      continue;
    }

    String text = bot.messages[i].text;

    if (text == "/nyalakan_rgb") {
      bot.sendMessage(chat_id, "Menghidupkan RGB LED", "");
      // Set LED RGB ke warna putih /menghidupkan RGB
      rgb_led.setPixelColor(0, rgb_led.Color(255, 255, 255));  // Default Putih
      rgb_led.show();
    }

    if (text == "/matikan_rgb") {
      bot.sendMessage(chat_id, "Mematikan RGB LED", "");
      // Matikan LED RGB
      rgb_led.setPixelColor(0, rgb_led.Color(0, 0, 0));  
      rgb_led.show();
    }

    if (text == "/merah") {
      bot.sendMessage(chat_id, "Mengubah warna LED ke MERAH", "");
      rgb_led.setPixelColor(0, rgb_led.Color(255, 0, 0));  // Merah
      rgb_led.show();
    }

    if (text == "/hijau") {
      bot.sendMessage(chat_id, "Mengubah warna LED ke HIJAU", "");
      rgb_led.setPixelColor(0, rgb_led.Color(0, 255, 0));  // Hijau
      rgb_led.show();
    }

    if (text == "/biru") {
      bot.sendMessage(chat_id, "Mengubah warna LED ke BIRU", "");
      rgb_led.setPixelColor(0, rgb_led.Color(0, 0, 255));  // Biru
      rgb_led.show();
    }

    if (text == "/kuning") {
      bot.sendMessage(chat_id, "Mengubah warna LED ke KUNING", "");
      rgb_led.setPixelColor(0, rgb_led.Color(255, 255, 0));  // Kuning
      rgb_led.show();
    }

    if (text == "/cyan") {
      bot.sendMessage(chat_id, "Mengubah warna LED ke CYAN", "");
      rgb_led.setPixelColor(0, rgb_led.Color(0, 255, 255));  // Cyan
      rgb_led.show();
    }

    if (text == "/ungu") {
      bot.sendMessage(chat_id, "Mengubah warna LED ke UNGU", "");
      rgb_led.setPixelColor(0, rgb_led.Color(255, 0, 255));  // Ungu
      rgb_led.show();
    }

    if (text == "/putih") {
      bot.sendMessage(chat_id, "Mengubah warna LED ke PUTIH", "");
      rgb_led.setPixelColor(0, rgb_led.Color(255, 255, 255));  // Putih
      rgb_led.show();
    }
  }
}

void setup() {
  Serial.begin(115200);

  // Set pin mode untuk LED RGB
  rgb_led.begin();
  rgb_led.show();  // Memastikan LED dimatikan pada awalnya

  // Koneksi ke Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println(WiFi.localIP());  // Cetak IP lokal ESP32

  // Sertifikat root untuk koneksi aman (Telegram)
  client.setCACert(TELEGRAM_CERTIFICATE_ROOT);
}

void loop() {
  if (millis() > lastTimeBotRan + botRequestDelay) {
    int numNewMessages = bot.getUpdates(bot.last_message_received + 1);

    while (numNewMessages) {
      handleNewMessages(numNewMessages);
      numNewMessages = bot.getUpdates(bot.last_message_received + 1);
    }
    lastTimeBotRan = millis();
  }
}
