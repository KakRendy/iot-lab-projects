\# 🌈 ESP32-S3 WS2812 RGB NeoPixel - Blink Warna Warni



Project ini adalah program sederhana untuk ESP32-S3 yang mengontrol LED RGB WS2812 (NeoPixel) untuk menampilkan berbagai warna secara bergantian (rainbow cycle sederhana).



\---



\## 🔧 Hardware yang Digunakan



\- ESP32-S3 (N16R8)

\- LED WS2812 / NeoPixel (1 LED)

\- Kabel jumper

\- Power 5V (sesuai kebutuhan LED)



\---



\## 📚 Library yang Digunakan



Pastikan sudah menginstall library berikut di Arduino IDE:



\- `Adafruit\_NeoPixel.h`



Install melalui Library Manager:

Adafruit NeoPixel by Adafruit



\---



\## ⚙️ Pin Konfigurasi



| Komponen | Pin ESP32-S3 |

|----------|-------------|

| WS2812 RGB (DIN) | GPIO 48 |

| LED TX (opsional) | GPIO 43 |

| LED RX (opsional) | GPIO 44 |



\---



\## 🎨 Cara Kerja Program



LED WS2812 akan menampilkan warna secara bergantian dengan delay 1 detik:



\- 🔴 Merah

\- 🟢 Hijau

\- 🔵 Biru

\- 🟡 Kuning

\- 🟦 Cyan

\- 🟣 Ungu

\- ⚪ Putih

\- ⚫ Mati (OFF)



Setiap warna ditampilkan selama \*\*1 detik\*\* sebelum berubah ke warna berikutnya.



\---



\## 💻 Cara Instalasi



1\. Buka Arduino IDE

2\. Install board ESP32 (Espressif Systems)

3\. Install library `Adafruit NeoPixel`

4\. Buka file `.ino`

5\. Pilih board: \*\*ESP32-S3 Dev Module\*\*

6\. Upload ke board



\---



\## 🚀 Fitur



\- Kontrol LED WS2812 (NeoPixel)

\- Efek warna bergantian otomatis

\- Simple dan mudah dikembangkan

\- Cocok untuk belajar ESP32 + RGB LED



\---



\## 👨‍💻 Author



\*\*Rendy Almaheri Adhi Pratama\*\*



\---



\## 📜 Lisensi



Project ini menggunakan \*\*MIT License\*\*

