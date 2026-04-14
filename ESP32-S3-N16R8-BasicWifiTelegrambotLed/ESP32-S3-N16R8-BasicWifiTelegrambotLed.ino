#include <WiFi.h> // Untuk menghubungkan ESP32 ke jaringan Wi-Fi.
#include <WiFiClientSecure.h> // Untuk koneksi HTTPS aman dengan Telegram.
#include <UniversalTelegramBot.h>   // + Library Telegram Bot
#include <ArduinoJson.h> // diperlukan untuk mengelola pesan Telegram (biasanya sepaket dengan UniversalTelegramBot yg full install)

// Ganti dengan kredensial jaringan Wi-Fi Anda
const char* ssid = "GANTI_DENGAN_SSID_ANDA"; // Ganti dengan SSID Hotspot (WEP/WPA/WPA2 - tidak bisa untuk Hotspot login MikroTik/Captive Portal)
const char* password = "GANTI_DENGAN_PASSWORD_ANDA"; // Ganti dengan Password Hotspot

// Token Bot Telegram Anda
#define BOTtoken "XXXXXXXXXX:XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"  // Ganti dengan token bot Anda
#define CHAT_ID "XXXXXXXXXX"  // Ganti dengan ID chat Anda

WiFiClientSecure client; // Membuat objek client dari kelas WiFiClientSecure yang digunakan untuk melakukan koneksi HTTPS yang aman dengan server Telegram.
UniversalTelegramBot bot(BOTtoken, client);

int botRequestDelay = 1000;  // Delay bot request 1 detik
unsigned long lastTimeBotRan;

const int ledPin = 12;  // LED terhubung di GPIO 12 - Mengatur pin GPIO 12 sebagai OUTPUT untuk lampu LED.
bool ledState = LOW;

void handleNewMessages(int numNewMessages) {
  for (int i = 0; i < numNewMessages; i++) {
    String chat_id = String(bot.messages[i].chat_id);
    if (chat_id != CHAT_ID) {
      bot.sendMessage(chat_id, "Pengguna tidak sah / Unauthorized user", "");
      continue;
    }

    String text = bot.messages[i].text;

    if (text == "/nyalakan_led") {
      ledState = HIGH;
      digitalWrite(ledPin, ledState);
      bot.sendMessage(chat_id, "LED dalam keadaan NYALA", "");
    }

    if (text == "/matikan_led") {
      ledState = LOW;
      digitalWrite(ledPin, ledState);
      bot.sendMessage(chat_id, "LED dalam keadaan MATI", "");
    }

    if (text == "/state") {
      if (digitalRead(ledPin)) {
        bot.sendMessage(chat_id, "LED dalam keadaan NYALA", "");
      } else {
        bot.sendMessage(chat_id, "LED dalam keadaan MATI", "");
      }
    }
  }
}

void setup() {
  Serial.begin(115200); //Menginisialisasi komunikasi serial untuk debugging.
  
  // Set pin mode untuk LED
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);

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
  //Bot memeriksa pesan baru secara berkala, memprosesnya, dan kemudian menunggu untuk pengecekan berikutnya setelah waktu yang ditentukan.
  if (millis() > lastTimeBotRan + botRequestDelay) {
    int numNewMessages = bot.getUpdates(bot.last_message_received + 1);

    while (numNewMessages) {
      handleNewMessages(numNewMessages);
      numNewMessages = bot.getUpdates(bot.last_message_received + 1);
    }
    lastTimeBotRan = millis(); // Menyimpan waktu pengecekan terakhir
  }
}
