# 🔊 Sound Detection with LED (Arduino)

Project sederhana Arduino untuk mendeteksi suara menggunakan sensor analog dan menyalakan LED sebagai indikator saat suara terdeteksi.

---

## 🚀 Fitur

- 🔊 Deteksi suara menggunakan sensor analog
- 💡 LED menyala saat ada suara
- 📟 Monitoring nilai sensor melalui Serial Monitor
- ⏱️ Delay untuk stabilisasi deteksi

---

## 🧠 Cara Kerja

1. Sensor membaca nilai analog dari pin A2
2. Nilai sensor ditampilkan di Serial Monitor
3. Jika nilai sensor > threshold (10):
   - LED menyala
   - Muncul pesan **"ADA SUARA"**
4. Jika tidak:
   - LED mati

---

## ⚙️ Logika Program


Jika nilaiSensor > 10
→ LED ON
→ Tampilkan "ADA SUARA"

Jika nilaiSensor ≤ 10
→ LED OFF


---

## 🔌 Konfigurasi Pin

| Komponen | Pin |
|----------|-----|
| Sensor Suara | A2 |
| LED | 13 |

---

## 🛠️ Komponen

- Arduino Uno / Nano
- Sound Sensor (Analog)
- LED
- Resistor (220Ω - 330Ω)
- Kabel jumper

---

## 💻 Serial Monitor

Baud rate:

9600


Output contoh:

Sensor = 5
Sensor = 12 ===== ADA SUARA =====


---

## ⚠️ Catatan

- Threshold `10` bisa disesuaikan tergantung sensitivitas sensor
- Jika terlalu sensitif, naikkan nilai threshold
- Jika kurang sensitif, turunkan nilai threshold

---

## 🎯 Tujuan Project

- Belajar membaca sensor analog
- Memahami kondisi if-else pada Arduino
- Membuat sistem deteksi sederhana berbasis sensor

---

## 👨‍💻 Author

**Rendy Almaheri Adhi Pratama**

---

## 📜 Lisensi

Menggunakan MIT License