# 🤖 Robot 4 Kaki Arduino (HC-SR04 + Servo + LED)

Robot 4 kaki (quadruped) berbasis Arduino yang dapat berjalan otomatis menggunakan sensor ultrasonik HC-SR04 untuk mendeteksi jarak, serta dilengkapi sistem LED indikator dan kontrol gerakan yang stabil.

---

## 🚀 Fitur Utama

- 🦿 Robot 4 kaki dengan servo motor
- 📡 Deteksi jarak menggunakan HC-SR04
- ⚙️ Mode gerakan otomatis:
  - 🚶 Jalan Lambat (5–10 cm)
  - 🏃 Jalan Normal (>10 cm)
- 🛑 Stop otomatis jika terlalu dekat (< 5 cm)
- 💡 LED indikator:
  - 🟢 Hijau = jalan normal
  - 🟡 Kuning = jalan lambat
  - 🔴 Merah = stop (berkedip)
- 🔒 Lock mode kuning (3 detik) untuk mencegah perubahan cepat
- 🔁 Pola jalan diagonal (lebih stabil)
- ⚡ Startup LED hijau (blink 1 detik)

---

## 🧠 Logika Sistem
< 5 cm → STOP (LED merah berkedip)
5–10 cm → JALAN LAMBAT (LED kuning)
10 cm → JALAN NORMAL (LED hijau)

Saat terjadi perubahan mode:
- Robot berhenti sebentar
- LED menyala sebagai indikator
- Kemudian melanjutkan gerakan

---

## 🦿 Pola Gerakan

Menggunakan **diagonal gait**:

1. Depan kiri + belakang kanan bergerak
2. Depan kanan + belakang kiri bergerak
3. Ulang terus

👉 Pola ini membuat robot lebih stabil saat berjalan.

---

## 🔌 Konfigurasi Pin

### Servo
| Kaki | Pin |
|------|-----|
| Depan Kiri | 8 |
| Belakang Kiri | 9 |
| Depan Kanan | 10 |
| Belakang Kanan | 11 |

### HC-SR04
| Komponen | Pin |
|----------|-----|
| TRIG | 2 |
| ECHO | 3 |

### LED
| Warna | Pin |
|------|-----|
| Merah | 5 |
| Kuning | 6 |
| Hijau | 7 |

---

## ⚠️ Kebutuhan Daya

- Gunakan **power supply eksternal (minimal 5V 3A)** untuk servo
- Jangan hanya mengandalkan Arduino
- Hindari tegangan drop yang menyebabkan reset

---

## 🛠️ Komponen yang Digunakan

- Arduino Uno / Nano
- Servo Motor (4 buah)
- HC-SR04 Ultrasonic Sensor
- LED (Merah, Kuning, Hijau)
- Resistor
- Power Supply eksternal

---

## 🎯 Tujuan Project

- Belajar robotika dasar (quadruped)
- Implementasi sensor jarak real-time
- Membuat sistem kontrol gerakan otomatis
- Eksperimen sistem embedded dan IoT

---

## 📌 Catatan

Project ini dibuat untuk pembelajaran dan eksperimen.  
Kode dapat dikembangkan lebih lanjut untuk fitur seperti:
- obstacle avoidance (belok otomatis)
- kontrol via Bluetooth / WiFi
- peningkatan stabilitas gerakan

---

## 👨‍💻 Author

**Rendy Almaheri Adhi Pratama**

---

## 📜 Lisensi

Menggunakan MIT License