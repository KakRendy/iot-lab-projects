# 📡 Radar Jarak Arduino (HC-SR04 + LCD I2C + Buzzer)

Project Arduino untuk mendeteksi jarak menggunakan sensor ultrasonik HC-SR04, menampilkan hasil pada LCD I2C, serta memberikan indikator visual (LED) dan suara (buzzer).

---

## 🚀 Fitur

- 📏 Pengukuran jarak real-time (cm)
- 🖥️ Tampilan jarak pada LCD 16x2 (I2C)
- 💡 LED sebagai indikator peringatan
- 🔊 Buzzer sebagai alarm jarak dekat
- 🚦 Status kondisi berdasarkan jarak
- 🎬 Tampilan startup (intro LCD)

---

## 🧠 Cara Kerja

Sensor HC-SR04 membaca jarak objek di depan, kemudian:

- Menampilkan jarak di LCD
- Menentukan status kondisi
- Mengaktifkan LED dan buzzer sesuai jarak

---

## ⚙️ Logika Jarak


20 – 30 cm → Aman
10 – 20 cm → Hati-hati (LED berkedip)
1 – 10 cm → Bahaya (LED ON + Buzzer ON)

30 cm → Aman


---

## 📺 Tampilan LCD

Contoh tampilan:


Jarak: 15 meter
Status: Hati2


---

## 🔌 Konfigurasi Pin

### HC-SR04
| Komponen | Pin |
|----------|-----|
| Trigger | 11 |
| Echo | 12 |

### Output
| Komponen | Pin |
|----------|-----|
| LED | 7 |
| Buzzer | 8 |

### LCD I2C
- Address: `0x27`
- Ukuran: 16x2

---

## 🛠️ Library yang Digunakan

- `NewPing.h` → untuk sensor HC-SR04
- `LiquidCrystal_I2C.h` → untuk LCD I2C
- `Wire.h` → komunikasi I2C

---

## 🛠️ Komponen

- Arduino Uno / Nano
- HC-SR04 Ultrasonic Sensor
- LCD 16x2 I2C
- LED
- Buzzer
- Resistor
- Kabel jumper

---

## ⚠️ Catatan

- Pastikan alamat I2C LCD sesuai (`0x27` atau `0x3F`)
- Jarak dari `ping_cm()` sebenarnya dalam **cm**, bukan meter
- Bisa ubah teks sesuai kebutuhan (misalnya "Harimau Menerkam")
- Gunakan delay secukupnya agar tampilan stabil

---

## 🎯 Tujuan Project

- Belajar sensor ultrasonik
- Menampilkan data ke LCD
- Membuat sistem peringatan berbasis jarak
- Integrasi sensor + output (LED & buzzer)

---

## 💡 Pengembangan Lanjutan

- Tambahkan servo untuk radar scanning
- Visualisasi radar (seperti sonar)
- Integrasi ke IoT (monitoring jarak via web)
- Tambah multi sensor

---

## 👨‍💻 Author

**Rendy Almaheri Adhi Pratama**

---

## 📜 Lisensi

Menggunakan MIT License