\# 💡 ESP32-S3 Basic LED Blink



!\[ESP32-S3](https://img.shields.io/badge/Board-ESP32--S3-blue)

!\[LED](https://img.shields.io/badge/Feature-Blink%20LED-green)

!\[Status](https://img.shields.io/badge/Project-Basic%20IoT-lightgrey)

!\[License](https://img.shields.io/badge/License-MIT-yellow)



Project ini adalah contoh \*\*paling dasar\*\* untuk ESP32-S3, yaitu menyalakan dan mematikan LED (Blink LED) menggunakan GPIO. LED nya sdh include di board ESP32-S3



\---



\## ✨ Fitur



\- 💡 LED ON / OFF sederhana

\- ⏱️ Delay 1 detik

\- 🧪 Cocok untuk pemula ESP32

\- ⚡ Dasar untuk project IoT lebih lanjut



\---



\## 🔌 Wiring



| Komponen | ESP32-S3 Pin |

|----------|-------------|

| LED (+)  | GPIO 13     |

| LED (-)  | GND         |



> ⚠️ Gunakan resistor 220Ω untuk LED eksternal



\---



\## ⚙️ Kode Inti



```cpp

const int ledPin = 13;



void setup() {

&#x20; pinMode(ledPin, OUTPUT);

}



void loop() {

&#x20; digitalWrite(ledPin, HIGH);

&#x20; delay(1000);



&#x20; digitalWrite(ledPin, LOW);

&#x20; delay(1000);

}



💡 Cara Kerja

ESP32-S3

&#x20;  ↓

GPIO 13

&#x20;  ↓

LED ON (1 detik)

&#x20;  ↓

LED OFF (1 detik)

&#x20;  ↓

Loop terus



🚀 Cara Upload

Install ESP32 Board di Arduino IDE

Pilih board: ESP32S3 Dev Module

Sambungkan ESP32-S3 ke PC

Upload kode

LED akan mulai berkedip otomatis



🧠 Pengembangan Lanjutan



Project ini bisa dikembangkan menjadi:



🔘 Button control LED

📶 Control via WiFi

📱 Control via Telegram Bot

🌈 RGB LED version

🏠 Smart home system

👨‍💻 Author



Rendy Almaheri Adhi Pratama



📜 License



Project ini menggunakan MIT License – bebas digunakan, dimodifikasi, dan dikembangkan.

