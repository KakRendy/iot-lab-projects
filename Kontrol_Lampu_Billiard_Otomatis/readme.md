\# 🎱 ESP32-S3 Kontrol Lampu Billiard Otomatis (MQTT)



Sistem ini menggunakan \*\*ESP32\*\* untuk mengontrol \*\*lampu/relay meja billiard secara otomatis\*\* melalui \*\*MQTT Broker\*\*.  

Cocok untuk sistem IoT pada ruang billiard, otomasi lampu meja, atau kontrol perangkat jarak jauh.



\---



\## 🚀 Fitur Utama



\- 🔌 Kontrol relay (ON/OFF) via MQTT

\- 📶 Terhubung ke WiFi otomatis

\- ☁️ Komunikasi real-time menggunakan broker MQTT (shiftr.io)

\- 🔁 Auto reconnect WiFi \& MQTT

\- 🧠 Logika sederhana dan stabil untuk kontrol perangkat



\---



\## 🧰 Komponen yang Dibutuhkan



\- ESP32 / ESP32-S3

\- Modul Relay (1 channel)

\- Akses WiFi

\- MQTT Broker (contoh: shiftr.io)

\- Beban listrik (lampu meja billiard)



\---



\## 📡 Konfigurasi WiFi \& MQTT



Edit bagian berikut sesuai jaringan Anda:



```cpp

const char\* ssid = "TP-Link Billiard";

const char\* password = "9bolasodok";



const char\* mqtt\_server = "billiard.cloud.shiftr.io";

const int mqtt\_port = 1883;

const char\* mqtt\_user = "billiard";

const char\* mqtt\_password = "r9een8BWhekFEQi1";



📌 Topic MQTT

Fungsi	Topic

Kontrol Relay	table/esp32b/relay



⚙️ Cara Kerja

ESP32 terhubung ke WiFi

ESP32 terhubung ke MQTT Broker



ESP32 subscribe ke topic:

table/esp32b/relay

Jika menerima pesan:

"0" → Relay ON

selain "0" → Relay OFF



💡 Logika Kontrol

if (payload == "0") {

&#x20; digitalWrite(RELAY\_PIN, HIGH); // Relay ON

} else {

&#x20; digitalWrite(RELAY\_PIN, LOW);  // Relay OFF

}



🔌 Pinout

Komponen	GPIO ESP32

Relay	GPIO 26



🔁 Auto Reconnect

Sistem otomatis akan:

Menghubungkan ulang WiFi jika terputus

Menghubungkan ulang MQTT jika disconnect

📲 Contoh Payload MQTT

0   → Lampu ON

1   → Lampu OFF



🧠 Catatan

Pastikan broker MQTT aktif sebelum upload

Gunakan relay sesuai tegangan beban

Jangan langsung menghubungkan ESP32 ke listrik AC tanpa modul relay



👨‍💻 Author



Rendy Almaheri Adhi Pratama



📜 License



Project ini menggunakan MIT License – bebas digunakan, dimodifikasi, dan dikembangkan.

