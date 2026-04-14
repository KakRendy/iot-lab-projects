\# 📏 Penggaris LCD Ultrasonik dengan HCSR04



Proyek ini menggunakan sensor \*\*ultrasonik HC-SR04\*\* untuk mengukur jarak dan menampilkannya secara real-time pada \*\*LCD I2C 16x2\*\*.  

Sangat cocok untuk percobaan belajar sensor ultrasonik, penggaris digital, atau sistem pengukuran sederhana.



\---



\## 🚀 Fitur Utama



\- 📡 Mengukur jarak dengan sensor HC-SR04

\- 💻 Tampilan jarak di \*\*LCD I2C 16x2\*\*

\- ⏱ Pembaruan jarak setiap 1 detik

\- 🔧 Mudah dikustomisasi (ubah pin, skala, atau unit pengukuran)



\---



\## 🧰 Komponen yang Dibutuhkan



\- Arduino / ESP32 / ESP8266

\- Sensor ultrasonik HC-SR04

\- LCD I2C 16x2

\- Kabel jumper



\---



\## ⚙️ Pinout



| Komponen | Pin Arduino |

|----------|------------|

| TRIG     | 11         |

| ECHO     | 12         |

| LCD SDA  | A4 (default I2C) |

| LCD SCL  | A5 (default I2C) |



\---



\## 🔌 Cara Kerja



1\. Sensor HC-SR04 mengirim pulsa ultrasonik.

2\. Sensor menerima pantulan dari objek.

3\. Jarak dihitung berdasarkan durasi pulsa.

4\. Hasil ditampilkan pada LCD dalam \*\*meter\*\*.



\---



\## 📜 Contoh Output LCD





jarak:

1.23 meter





\---



\## 💡 Catatan



\- Pastikan alamat I2C LCD sesuai (default: `0x27`).

\- Untuk unit lain, ubah perhitungan jarak pada variabel `jarak`.

\- Jarak maksimal sensor ini \~30 cm sesuai pengaturan `NewPing sensor (11,12,30);`.



\---



\## 👨‍💻 Author



\*\*Rendy Almaheri Adhi Pratama\*\*



\---



\## 📜 License



Project ini menggunakan \*\*MIT License\*\* – bebas digunakan, dimodifikasi, 

