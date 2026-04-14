\# 🤖 Posisi Berdiri Tegak - Kalibrasi Awal



Proyek ini adalah \*\*program kalibrasi awal untuk robot servo 4 kaki\*\*.  

Tujuannya adalah menempatkan robot dalam posisi \*\*berdiri tegak\*\* sebagai titik awal sebelum melakukan langkah atau gerakan lebih kompleks.



\---



\## 🚀 Fitur Utama



\- Mengatur \*\*4 servo kaki\*\* (depan/kiri, belakang/kiri, depan/kanan, belakang/kanan)  

\- Menempatkan robot pada posisi \*\*tengah\*\* (berdiri tegak)  

\- Simulasi langkah kiri-kanan untuk kalibrasi awal  

\- Mudah dimodifikasi untuk robot quadruped



\---



\## 🧰 Komponen yang Dibutuhkan



\- 4x \*\*Servo motor\*\*

\- Arduino / ESP32 / ESP8266

\- Kabel jumper

\- Robot quadruped frame (opsional untuk percobaan langsung)



\---



\## ⚙️ Pinout



| Servo | Pin Arduino |

|-------|------------|

| Depan Kiri (DK) | 8  |

| Belakang Kiri (BK) | 9 |

| Depan Kanan (DN) | 10 |

| Belakang Kanan (BN) | 11 |



\---



\## 🔌 Cara Kerja



1\. Servo dipasang dan dikalibrasi dengan posisi tengah (`TENGAH = 90°`)  

2\. Fungsi `berdiri()` menempatkan robot dalam posisi tegak  

3\. Loop utama melakukan \*\*gerakan langkah kiri-kanan\*\* sebagai pengujian kalibrasi  

4\. Servo bergerak dalam rentang ±35° (`LANGKAH = 35`) dari posisi tengah



\---



\## 💡 Catatan



\- Pastikan \*\*servo bebas bergerak\*\* sebelum menjalankan sketch agar tidak merusak mekanik  

\- Rentang `LANGKAH` dapat diubah sesuai \*\*ukuran langkah robot\*\*  

\- Gunakan \*\*delay\*\* untuk memastikan servo mencapai posisi sebelum langkah berikutnya



\---



\## 👨‍💻 Author



\*\*Rendy Almaheri Adhi Pratama\*\*



\---



\## 📜 License



Project ini menggunakan \*\*MIT License\*\* – bebas digunakan, dimodifikasi, dan dikembangkan.

