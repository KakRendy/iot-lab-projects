\# 🤖 ESP32-S3 Telegram Bot LED Controller



!\[ESP32](https://img.shields.io/badge/Board-ESP32--S3-blue)

!\[WiFi](https://img.shields.io/badge/Connection-WiFi-green)

!\[Telegram](https://img.shields.io/badge/Bot-Telegram-blue)

!\[License](https://img.shields.io/badge/License-MIT-yellow)



Project ini adalah implementasi \*\*ESP32-S3\*\* untuk mengontrol LED menggunakan \*\*Telegram Bot\*\* melalui koneksi WiFi dengan komunikasi aman (HTTPS).



\---



\## ✨ Fitur Utama



\- 📶 Koneksi WiFi otomatis

\- 🤖 Kontrol LED via Telegram Bot

\- 💡 ON / OFF LED dari chat

\- 📊 Cek status LED (`/state`)

\- 🔐 Proteksi hanya untuk user tertentu (CHAT\_ID)

\- 🔒 Koneksi aman HTTPS (SSL Telegram API)



\---



\## 📦 Library yang Dibutuhkan



Install melalui \*\*Arduino Library Manager\*\*:



\- WiFi (ESP32 Core)

\- WiFiClientSecure (ESP32 Core)

\- UniversalTelegramBot

\- ArduinoJson



\---



\## 🔌 Wiring Diagram



| Komponen | ESP32-S3 Pin |

|----------|-------------|

| LED      | GPIO 12     |

| GND      | GND         |



> 💡 Bisa menggunakan LED internal atau LED eksternal + resistor 220Ω



\---



\## ⚙️ Konfigurasi Kode



Edit bagian berikut sebelum upload:



```cpp

const char\* ssid = "GANTI\_DENGAN\_SSID\_ANDA";

const char\* password = "GANTI\_DENGAN\_PASSWORD\_ANDA";



\#define BOTtoken "XXXXXXXXXX:XXXXXXXXXXXXXXXXXXXXXXXX"

\#define CHAT\_ID "XXXXXXXXXX"



💬 Command Telegram Bot



Kirim pesan ke bot kamu:

| Command         | Deskripsi         |

| --------------- | ----------------- |

| `/nyalakan\_led` | Menyalakan LED 💡 |

| `/matikan\_led`  | Mematikan LED ⚫   |

| `/state`        | Cek status LED 📊 |


⚙️ Cara Kerja Sistem

Telegram User

&#x20;    ↓

Telegram Bot API

&#x20;    ↓

ESP32-S3 (WiFi + HTTPS)

&#x20;    ↓

GPIO 12 (LED Output)



🚀 Cara Upload

Install board ESP32 di Arduino IDE

Pilih board: ESP32S3 Dev Module

Install library yang dibutuhkan

Edit SSID, password, BOT token, CHAT\_ID

Upload ke board ESP32-S3

Buka Serial Monitor (115200 baud)



⚠️ Catatan Penting

🔑 Jangan publish BOT TOKEN ke publik

👤 Bot hanya merespon CHAT\_ID yang terdaftar

🌐 Tidak bisa digunakan pada WiFi captive portal (login web)

📡 Pastikan koneksi internet stabil



🧠 Contoh Use Case

Smart Home LED Control

IoT Notification System

Remote device switching via Telegram

Learning project ESP32 + IoT



👨‍💻 Author



Rendy Almaheri Adhi Pratama



📜 License



This project is licensed under the MIT License – free to use, modify, and distribute.



