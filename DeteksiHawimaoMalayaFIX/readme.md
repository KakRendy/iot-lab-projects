\# 🐅 Radar Harimau (Ultrasonic Warning System)



Proyek ini adalah sistem peringatan berbasis Arduino yang menggunakan sensor ultrasonik untuk mendeteksi jarak objek. Sistem akan menampilkan status pada LCD I2C, menyalakan LED, buzzer, dan memutar suara ketika objek semakin dekat.



\---



\## 🔧 Komponen yang Digunakan



\- Arduino (Uno / sejenisnya)

\- Sensor Ultrasonik HC-SR04 (via library NewPing)

\- LCD I2C 16x2

\- LED

\- Buzzer

\- Speaker (PCM audio output)

\- Kabel jumper \& breadboard



\---



\## 📚 Library yang Dibutuhkan



Pastikan sudah menginstall library berikut di Arduino IDE:



\- `NewPing.h`

\- `Wire.h`

\- `LiquidCrystal\_I2C.h`

\- `PCM.h`



\---



\## ⚙️ Cara Kerja Sistem



Sistem membaca jarak menggunakan sensor ultrasonik, kemudian menentukan kondisi:



\### 📏 Jarak 20 - 30 cm

\- Status: \*\*Aman\*\*

\- LED berkedip



\### ⚠️ Jarak 10 - 20 cm

\- Status: \*\*WASPADA\*\*

\- LED + buzzer aktif



\### 🚨 Jarak 1 - 10 cm

\- Status: \*\*HARIMAU MENERKAM\*\*

\- Memutar suara peringatan (PCM audio)



\### 📡 Di luar jangkauan

\- Status: \*\*OK Aman\*\*



\---



\## 💻 Cara Instalasi



1\. Clone atau download repository ini

2\. Buka file `.ino` di Arduino IDE

3\. Install semua library yang dibutuhkan

4\. Pilih board Arduino yang sesuai

5\. Upload program ke Arduino



\---



\## 🧠 Pin Konfigurasi



\- Trigger Ultrasonic: \*\*Pin 13\*\*

\- Echo Ultrasonic: \*\*Pin 12\*\*

\- LED: \*\*Pin 7\*\*

\- Buzzer: \*\*Pin 8\*\*

\- LCD I2C: \*\*0x27\*\*



\---



\## 📦 Fitur



\- Monitoring jarak real-time

\- Tampilan LCD 16x2

\- Alarm LED \& buzzer

\- Audio warning (PCM)

\- Sistem peringatan bertingkat



\---



\## 👨‍💻 Author



\*\*Rendy Almaheri Adhi Pratama\*\*



\---



\## 📜 Lisensi



Proyek ini menggunakan \*\*MIT License\*\*

