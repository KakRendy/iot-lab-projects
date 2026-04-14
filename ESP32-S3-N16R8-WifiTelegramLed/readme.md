\# 🔌 ESP32-S3 WiFi Telegram LED Controller



!\[ESP32-S3](https://img.shields.io/badge/Board-ESP32--S3-blue)

!\[Telegram](https://img.shields.io/badge/Bot-Telegram-blue)

!\[WiFi](https://img.shields.io/badge/Connection-WiFi-green)

!\[LED](https://img.shields.io/badge/Feature-Remote%20LED-orange)

!\[License](https://img.shields.io/badge/License-MIT-yellow)



Project ini adalah implementasi \*\*ESP32-S3 sebagai IoT device\*\* untuk mengontrol LED melalui \*\*Telegram Bot\*\* menggunakan koneksi WiFi dan HTTPS.



\---



\## ✨ Fitur Utama



\- 📶 Koneksi WiFi otomatis

\- 🤖 Kontrol LED via Telegram Bot

\- 💡 ON / OFF LED dari chat

\- 📊 Cek status LED (`/state`)

\- 🔐 Proteksi hanya untuk `CHAT\_ID` tertentu

\- 🔒 Koneksi aman HTTPS (SSL Telegram API)



\---



\## 💬 Daftar Command Telegram



| Command     | Fungsi                |

|------------|----------------------|

| `/start`   | Menampilkan menu help |

| `/led\_on`  | Menyalakan LED 💡     |

| `/led\_off` | Mematikan LED ⚫      |

| `/state`   | Mengecek status LED 📊 |



\---



\## 🔌 Wiring



| Komponen | ESP32-S3 Pin |

|----------|-------------|

| LED      | GPIO 13     |

| GND      | GND         |



> ⚠️ Gunakan resistor 220Ω untuk LED eksternal



\---



\## 📦 Library yang Dibutuhkan



Install melalui Arduino Library Manager:



\- WiFi (ESP32 Core)

\- WiFiClientSecure

\- UniversalTelegramBot

\- ArduinoJson



\---



\## ⚙️ Konfigurasi



Edit bagian berikut sebelum upload:



```cpp

const char\* ssid = "DOSEN";

const char\* password = "123456789";



\#define BOTtoken "YOUR\_BOT\_TOKEN"

\#define CHAT\_ID "YOUR\_CHAT\_ID"

💡 Cara Kerja Sistem

User Telegram

&#x20;    ↓

Telegram Bot API

&#x20;    ↓

ESP32-S3 (WiFi + HTTPS)

&#x20;    ↓

GPIO 13 Output

&#x20;    ↓

LED ON / OFF



🚀 Cara Upload

Install ESP32 board di Arduino IDE

Pilih board: ESP32S3 Dev Module

Install library yang dibutuhkan

Masukkan SSID, password, BOT token, CHAT\_ID

Upload ke ESP32-S3

Buka Serial Monitor (115200 baud)



⚠️ Catatan Penting

🔑 Jangan publish BOT TOKEN ke publik

👤 Bot hanya merespon user dengan CHAT\_ID yang diizinkan

🌐 Tidak bisa digunakan di WiFi captive portal (login web)

📡 Pastikan koneksi internet stabil



🧠 Pengembangan Lanjutan

Project ini bisa dikembangkan menjadi:

🔔 Notifikasi sensor (gerak / suhu / gas)

🏠 Smart home system

📱 Control multiple devices via Telegram

🌈 Integrasi RGB LED

📊 Dashboard IoT monitoring



👨‍💻 Author



Rendy Almaheri Adhi Pratama



📜 License



Project ini menggunakan MIT License – bebas digunakan, dimodifikasi, dan dikembangkan.

