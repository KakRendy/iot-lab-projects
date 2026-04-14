\# 🌈 ESP32-S3 RGB NeoPixel + Telegram Bot Controller



!\[ESP32-S3](https://img.shields.io/badge/Board-ESP32--S3-blue)

!\[Telegram](https://img.shields.io/badge/Bot-Telegram-blue)

!\[NeoPixel](https://img.shields.io/badge/LED-WS2812%20RGB-red)

!\[WiFi](https://img.shields.io/badge/Connection-WiFi-green)

!\[License](https://img.shields.io/badge/License-MIT-yellow)



Project ini adalah sistem \*\*kontrol LED RGB WS2812 (NeoPixel)\*\* menggunakan \*\*ESP32-S3\*\* yang dikendalikan melalui \*\*Telegram Bot\*\* via WiFi (HTTPS).



\---



\## ✨ Fitur Utama



\- 📶 Koneksi WiFi otomatis

\- 🤖 Kontrol RGB LED via Telegram Bot

\- 🎨 Ubah warna LED dari chat

\- 🔒 Akses hanya untuk CHAT\_ID tertentu

\- ⚡ Komunikasi aman HTTPS (SSL Telegram API)



\---



\## 🎨 Daftar Command Telegram



| Command        | Fungsi                |

|----------------|----------------------|

| `/nyalakan\_rgb` | Menyalakan LED (putih) |

| `/matikan\_rgb`  | Mematikan LED        |

| `/merah`        | Warna merah 🔴       |

| `/hijau`        | Warna hijau 🟢       |

| `/biru`         | Warna biru 🔵        |

| `/kuning`       | Warna kuning 🟡      |

| `/cyan`         | Warna cyan 🔵🟢      |

| `/ungu`         | Warna ungu 🟣        |

| `/putih`        | Warna putih ⚪       |



\---



\## 🔌 Wiring



| Komponen   | ESP32-S3 Pin |

|------------|-------------|

| WS2812 DIN | GPIO 48     |

| VCC        | 5V          |

| GND        | GND         |



> ⚠️ Gunakan power supply eksternal jika LED banyak



\---



\## 📦 Library yang Dibutuhkan



Install via Arduino Library Manager:



\- WiFi (ESP32 Core)

\- WiFiClientSecure (ESP32 Core)

\- UniversalTelegramBot

\- Adafruit NeoPixel

\- ArduinoJson



\---



\## ⚙️ Konfigurasi



Edit bagian berikut sebelum upload:



```cpp

const char\* ssid = "xxx";

const char\* password = "xxx";



\#define BOTtoken "xxx"

\#define CHAT\_ID "xxx"



💡 Cara Kerja Sistem

Telegram User

&#x20;    ↓

Telegram Bot API

&#x20;    ↓

ESP32-S3 (WiFi + HTTPS)

&#x20;    ↓

Adafruit NeoPixel Library

&#x20;    ↓

WS2812 RGB LED (GPIO 48)



🚀 Cara Upload

Install ESP32 board di Arduino IDE

Pilih board: ESP32S3 Dev Module

Install semua library yang dibutuhkan

Masukkan SSID, password, BOT token, CHAT\_ID

Upload ke ESP32-S3

Buka Serial Monitor (115200 baud)



⚠️ Catatan Penting

🔑 Jangan publish BOT TOKEN ke publik

👤 Bot hanya merespon CHAT\_ID yang diizinkan

🌐 Tidak bisa digunakan di WiFi captive portal (login web)

⚡ Pastikan koneksi stabil agar bot tidak delay



🧠 Pengembangan Lanjutan

Project ini bisa dikembangkan menjadi:

🌈 Animasi rainbow via Telegram

🎛️ Control brightness LED

📱 Smart home lighting system

🔔 Notifikasi warna berdasarkan sensor

🎶 LED music visualizer



👨‍💻 Author



Rendy Almaheri Adhi Pratama



📜 License



Project ini menggunakan MIT License – bebas digunakan, dimodifikasi, dan dikembangkan.

