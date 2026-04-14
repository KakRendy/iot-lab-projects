# 🐯 Radar Harimau (Arduino Project)

## 📌 Deskripsi
**Radar Harimau** adalah sistem pendeteksi jarak berbasis Arduino yang menggunakan sensor ultrasonik untuk mendeteksi objek di sekitarnya. Sistem ini menampilkan jarak pada LCD, serta memberikan peringatan melalui LED, buzzer, dan suara ketika objek berada dalam jarak tertentu.

Project ini cocok untuk:
- Sistem keamanan sederhana
- Alarm berbasis jarak
- Simulasi radar / deteksi gerakan


---

## ⚙️ Fitur Utama
- 📏 Mengukur jarak menggunakan sensor ultrasonik  
- 📺 Menampilkan jarak & status pada LCD I2C 16x2  
- 💡 Indikator LED sebagai peringatan visual  
- 🔊 Buzzer sebagai alarm suara  
- 🎵 Audio playback saat objek sangat dekat  
- 🚨 Multi-level status: Aman, Waspada, Bahaya  


---

## 🧰 Komponen yang Dibutuhkan
- Arduino (Uno / Nano / Mega)  
- Sensor Ultrasonik HC-SR04  
- LCD I2C 16x2  
- LED  
- Buzzer  
- Resistor (opsional)  
- Kabel jumper  


---

## 🔌 Konfigurasi Pin

| Komponen        | Pin Arduino |
|----------------|------------|
| Trigger Sensor | 12         |
| Echo Sensor    | 13         |
| LED            | 7          |
| Buzzer         | 8          |
| LCD I2C        | SDA / SCL  |


---

## 📚 Library yang Digunakan
- `NewPing`  
- `Wire`  
- `LiquidCrystal_I2C`  
- `PCM`  


---

## 🧠 Cara Kerja Sistem

| Jarak        | Status              | Aksi                          |
|-------------|-------------------|-------------------------------|
| > 30 cm     | Aman              | Tidak ada alarm               |
| 20 - 30 cm  | Aman (terdeteksi) | LED & buzzer berkedip pelan   |
| 10 - 20 cm  | Waspada           | LED & buzzer lebih cepat      |
| 1 - 10 cm   | Bahaya            | LED + suara diputar           |


---

## 🚀 Cara Menjalankan
1. Rangkai semua komponen sesuai konfigurasi pin  
2. Install semua library yang dibutuhkan  
3. Upload kode ke Arduino  
4. Nyalakan sistem  
5. Amati hasil melalui LCD  


---

## ⚠️ Catatan
- Alamat LCD default: `0x27`  
- Jarak maksimum sensor: `50 cm`  
- Gunakan power supply yang stabil  
- Audio menggunakan PWM (tergantung board Arduino)  


---

## 💡 Pengembangan Selanjutnya
- Tambahkan servo (radar bergerak)  
- Integrasi dengan IoT  
- Tambahkan sensor lain (PIR / kamera)  
- Notifikasi ke smartphone  


---

## 👨‍💻 Author
**Rendy Almaheri Adhi Pratama**


---

## 📜 Lisensi
Project ini menggunakan **MIT License**