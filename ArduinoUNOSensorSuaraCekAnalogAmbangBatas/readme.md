# 📊 Analog Read Sensor (Arduino)

Project sederhana untuk membaca nilai analog dari sensor menggunakan Arduino dan menampilkannya pada Serial Monitor.

---

## 🚀 Fitur

- 📥 Membaca nilai analog dari pin A2
- 📟 Menampilkan data secara real-time di Serial Monitor
- ⚡ Program ringan dan cocok untuk dasar pembelajaran

---

## 🧠 Cara Kerja

1. Arduino membaca nilai analog dari pin A2
2. Nilai tersebut disimpan dalam variabel `batas`
3. Nilai dikirim ke Serial Monitor secara terus-menerus

---

## ⚙️ Logika Program


batas = analogRead(A2)
→ tampilkan ke Serial Monitor


---

## 🔌 Konfigurasi Pin

| Komponen | Pin |
|----------|-----|
| Sensor Analog | A2 |

---

## 🛠️ Komponen

- Arduino Uno / Nano
- Sensor analog (potensiometer / sensor lain)
- Kabel jumper

---

## 📟 Serial Monitor

Baud rate:

9600


Contoh output:

120
350
678


---

## ⚠️ Catatan

- Nilai analog berkisar antara **0 – 1023**
- Nilai tergantung jenis sensor yang digunakan
- Bisa menggunakan:
  - Potensiometer
  - Sensor cahaya (LDR)
  - Sensor suara
  - Sensor lainnya

---

## 🎯 Tujuan Project

- Belajar dasar pembacaan sensor analog
- Memahami fungsi `analogRead()`
- Menampilkan data ke Serial Monitor
- Dasar untuk project IoT dan sensor

---

## 💡 Pengembangan Lanjutan

- Menambahkan LED berdasarkan nilai sensor
- Membuat threshold (batas atas/bawah)
- Visualisasi data (grafik)
- Integrasi ke IoT (ESP / MQTT)

---

## 👨‍💻 Author

**Rendy Almaheri Adhi Pratama**

---

## 📜 Lisensi

Menggunakan MIT License