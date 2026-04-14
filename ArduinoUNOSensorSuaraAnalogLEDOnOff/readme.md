# 👏 Clap Control LED (Arduino Sound Sensor)

Project Arduino untuk mengontrol LED menggunakan tepukan tangan (clap). LED akan menyala atau mati berdasarkan jumlah tepukan yang terdeteksi.

---

## 🚀 Fitur

- 👏 Deteksi suara tepukan (clap detection)
- 💡 LED ON/OFF menggunakan tepukan
- 🔁 Toggle LED:
  - Tepukan 1 → LED ON
  - Tepukan 2 → LED OFF
- ⏱️ Debounce system untuk menghindari deteksi ganda
- 📟 Monitoring via Serial Monitor

---

## 🧠 Cara Kerja

1. Sensor membaca nilai analog dari suara
2. Jika suara melebihi ambang batas (threshold):
   - Sistem mendeteksi sebagai tepukan
3. Setiap tepukan dihitung:
   - Tepukan ke-1 → LED menyala
   - Tepukan ke-2 → LED mati
4. Setelah 2 tepukan:
   - Counter di-reset ke 0

---

## ⚙️ Logika Program


Jika suara terdeteksi:
→ tambah clapCount

clapCount = 1 → LED ON
clapCount = 2 → LED OFF + reset


---

## 🔌 Konfigurasi Pin

| Komponen | Pin |
|----------|-----|
| Sensor Suara | A0 |
| LED | 13 |

---

## 🛠️ Komponen

- Arduino Uno / Nano
- Sound Sensor (Analog)
- LED
- Resistor (220Ω - 330Ω)
- Kabel jumper

---

## ⚙️ Parameter Penting

| Parameter | Nilai | Fungsi |
|----------|------|--------|
| `threshold` | 600 | Sensitivitas deteksi suara |
| `debounceDelay` | 500 ms | Mencegah deteksi ganda |

---

## 📟 Serial Monitor

Baud rate:

9600


Contoh output:

Tepukan ke-1
Tepukan ke-2


---

## ⚠️ Catatan

- Jika terlalu sensitif → naikkan `threshold`
- Jika kurang sensitif → turunkan `threshold`
- Hindari noise (suara lingkungan) yang bisa memicu false detection

---

## 🎯 Tujuan Project

- Belajar membaca sensor analog
- Implementasi event-based control (berbasis kejadian)
- Membuat sistem interaksi sederhana dengan suara
- Memahami debounce dalam sistem sensor

---

## 💡 Pengembangan Lanjutan

- Tambah lebih banyak pola (3 tepukan, 4 tepukan, dll)
- Kontrol lebih dari 1 LED
- Integrasi dengan relay (lampu rumah)
- IoT control via WiFi / Bluetooth

---

## 👨‍💻 Author

**Rendy Almaheri Adhi Pratama**

---

## 📜 Lisensi

Menggunakan MIT License