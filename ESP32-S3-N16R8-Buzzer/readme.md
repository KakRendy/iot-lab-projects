\# 🔊 ESP32-S3 Buzzer Tone Project



!\[ESP32-S3](https://img.shields.io/badge/Board-ESP32--S3-blue)

!\[Buzzer](https://img.shields.io/badge/Feature-Buzzer%20Tone-orange)

!\[Status](https://img.shields.io/badge/Project-Audio%20Simple-lightgrey)

!\[License](https://img.shields.io/badge/License-MIT-yellow)



Project ini adalah contoh sederhana penggunaan \*\*ESP32-S3\*\* untuk menghasilkan suara menggunakan \*\*buzzer aktif/pasif\*\* dengan fungsi `tone()`.



\---



\## ✨ Fitur



\- 🔊 Menghasilkan suara 1000 Hz

\- ⏱️ Durasi bunyi 1 detik

\- 🔁 Loop ON/OFF otomatis

\- 🧪 Cocok untuk pemula Arduino \& ESP32



\---



\## 🔌 Wiring



| Komponen | ESP32-S3 Pin |

|----------|-------------|

| Buzzer + | GPIO 13     |

| Buzzer - | GND         |



> ⚠️ Gunakan buzzer 3.3V atau 5V sesuai modul



\---



\## ⚙️ Kode Inti



```cpp

const int buzzerPin = 13;



void setup() {

&#x20; pinMode(buzzerPin, OUTPUT);

}



void loop() {

&#x20; tone(buzzerPin, 1000);  // Frekuensi 1000 Hz

&#x20; delay(1000);



&#x20; noTone(buzzerPin);      // Matikan suara

&#x20; delay(1000);

}



💡 Cara Kerja

ESP32-S3

&#x20;  ↓

GPIO 13

&#x20;  ↓

Buzzer ON (1000 Hz)

&#x20;  ↓

1 detik bunyi

&#x20;  ↓

Mati 1 detik

&#x20;  ↓

Loop terus



🚀 Cara Upload

Install ESP32 board di Arduino IDE

Pilih board: ESP32S3 Dev Module

Hubungkan ESP32-S3 ke PC

Upload program

Buzzer akan mulai berbunyi otomatis



🧠 Pengembangan Lanjutan

Project ini bisa dikembangkan menjadi:

🎵 Melody musik sederhana

🚨 Alarm sensor (jarak / gas / gerak)

📱 Kontrol via Telegram Bot

🔔 Notifikasi IoT smart device

🎮 Sound effect system



👨‍💻 Author



Rendy Almaheri Adhi Pratama



📜 License



Project ini menggunakan MIT License – bebas digunakan, dimodifikasi, dan dikembangkan.

