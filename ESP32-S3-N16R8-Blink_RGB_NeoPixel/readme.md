\# 🌈 ESP32-S3 NeoPixel RGB Blink (WS2812)



!\[ESP32-S3](https://img.shields.io/badge/Board-ESP32--S3-blue)

!\[NeoPixel](https://img.shields.io/badge/LED-WS2812%20NeoPixel-red)

!\[Status](https://img.shields.io/badge/Project-Blinking%20RGB-brightgreen)

!\[License](https://img.shields.io/badge/License-MIT-yellow)



Project ini adalah contoh sederhana penggunaan \*\*ESP32-S3\*\* untuk mengontrol LED \*\*WS2812 NeoPixel RGB\*\* menggunakan library \*\*Adafruit NeoPixel\*\*.



\---



\## ✨ Fitur



\- 🌈 Kontrol LED RGB WS2812 (NeoPixel)

\- 🔴 Menampilkan warna merah

\- 🟢 Menampilkan warna hijau

\- 🔵 Menampilkan warna biru

\- 🔁 Loop otomatis perubahan warna

\- ⚡ Implementasi sederhana untuk IoT \& LED project



\---



\## 📦 Library yang Dibutuhkan



Install melalui \*\*Arduino Library Manager\*\*:



\- Adafruit NeoPixel



\---



\## 🔌 Wiring



| Komponen      | ESP32-S3 Pin |

|---------------|-------------|

| WS2812 DIN    | GPIO 48     |

| VCC           | 5V / 3.3V\*  |

| GND           | GND         |



> ⚠️ Disarankan menggunakan power 5V eksternal untuk LED WS2812 jika banyak LED



\---



\## ⚙️ Konfigurasi Pin



```cpp

\#define RGB\_LED\_PIN 48

\#define NUM\_RGB\_LEDS 1



💡 Cara Kerja Program

ESP32-S3

&#x20;  ↓

Adafruit NeoPixel Library

&#x20;  ↓

GPIO 48 (Data Pin)

&#x20;  ↓

WS2812 LED RGB

&#x20;  ↓

Color Cycle (R → G → B)



🎨 Urutan Warna

Program akan menampilkan warna secara berurutan:



🔴 Merah

🟢 Hijau

🔵 Biru



Setiap warna ditampilkan selama 1 detik.



🚀 Cara Upload

Install ESP32 Board di Arduino IDE

Pilih board: ESP32S3 Dev Module

Install library:

Adafruit NeoPixel

Sambungkan ESP32-S3

Upload program

LED akan otomatis berkedip warna



⚠️ Catatan Penting

⚡ WS2812 sensitif terhadap tegangan (pastikan wiring benar)

🔌 Gunakan resistor 330Ω pada data line (disarankan)

🔋 Gunakan capacitor 1000µF jika banyak LED

📡 Jangan lupa ground harus disatukan (common ground)

🧠 Pengembangan Lanjutan



Project ini bisa dikembangkan menjadi:



🌈 Rainbow animation

🎛️ Control via WiFi / Bluetooth

📱 Integrasi Telegram Bot

🎮 LED visualizer musik

🏠 Smart lighting system



👨‍💻 Author



Rendy Almaheri Adhi Pratama



📜 License



Project ini menggunakan MIT License – bebas digunakan, dimodifikasi, dan dikembangkan.

