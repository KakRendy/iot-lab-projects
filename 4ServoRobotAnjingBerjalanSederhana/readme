# 🤖 Quadruped Robot - Arduino (HC-SR04 + Servo + LED)

Robot 4 kaki berbasis Arduino yang menggunakan servo motor dan sensor ultrasonik HC-SR04 untuk mendeteksi jarak dan berjalan secara otomatis dengan beberapa mode gerakan.

---

## 🚀 Fitur Utama

- 🦿 Robot 4 kaki (quadruped walking robot)
- 📡 Sensor jarak HC-SR04
- ⚙️ Dua mode gerakan otomatis:
  - 🚶 JALAN LAMBAT (5–10 cm)
  - 🏃 JALAN NORMAL (>10 cm)
- 🛑 STOP otomatis jika jarak terlalu dekat (< 5 cm)
- 💡 LED indikator status:
  - 🟢 Hijau = jalan normal
  - 🟡 Kuning = jalan lambat
  - 🔴 Merah = stop (blink)
- 🔒 Lock mode untuk mencegah perubahan status terlalu cepat
- 🔁 Step walking gait (diagonal movement)
- ⚡ Startup indicator LED hijau

---

## 🧠 Cara Kerja Sistem

Robot akan membaca jarak di depan menggunakan sensor HC-SR04, lalu menentukan mode gerakan:
< 5 cm → STOP (berhenti + LED merah blink)
5–10 cm → JALAN LAMBAT (LED kuning)
10 cm → JALAN NORMAL (LED hijau)

Saat mode berubah, robot akan:
- berhenti sebentar
- menampilkan LED status
- kemudian melanjutkan gerakan

---

## 🦿 Pola Gerakan (Gait)

Robot menggunakan **diagonal walking gait**:

1. Depan kiri + belakang kanan bergerak
2. Depan kanan + belakang kiri bergerak
3. Ulang terus

Ini membuat robot lebih stabil saat berjalan.

---

## 🔌 Pin Configuration

### Servo Motor
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

### LED Indicator
| Warna | Pin |
|------|-----|
| Merah | 5 |
| Kuning | 6 |
| Hijau | 7 |

---

## ⚠️ Power Requirement

- Gunakan **power eksternal untuk servo (minimal 5V 3A)**
- Jangan hanya mengandalkan power dari Arduino
- Hindari reset akibat drop tegangan

---

## 🛠️ Teknologi yang Digunakan

- Arduino Uno / Nano
- Servo Motor (4 unit)
- HC-SR04 Ultrasonic Sensor
- LED Indicator System
- C/C++ (Arduino IDE)

---

## 🎯 Tujuan Project

- Belajar dasar robotika 4 kaki
- Implementasi sensor jarak real-time
- Pengembangan gait walking robot
- Sistem kontrol berbasis state machine sederhana

---

## 📷 Catatan

Project ini dibuat untuk pembelajaran dan eksperimen robotika dan IoT.

---

## 👨‍💻 Author

**Rendy Almaheri Adhi Pratama**

---

## 📜 License

This project is licensed under the MIT License.
