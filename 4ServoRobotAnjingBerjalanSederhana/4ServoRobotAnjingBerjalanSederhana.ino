
/*
====================================================
ROBOT 4 KAKI - FINAL VERSION (STABLE WALK + FAST + STOP)

FUNGSI UTAMA:
----------------------------------------------------
Robot berjalan dengan 2 mode gerak:
1. JALAN LAMBAT  (5–10 cm)
2. JALAN NORMAL  (>10 cm)

STOP MODE:
- Jarak < 5 cm
- Robot berhenti total
- LED merah berkedip terus

FITUR TAMBAHAN:
----------------------------------------------------
✔ HC-SR04 untuk deteksi jarak depan
✔ Step walking 4 kaki (diagonal gait)
✔ Mode FAST & SLOW otomatis
✔ LOCK MODE kuning (anti flicker 3 detik)
✔ LED indikator:
   - Hijau  = jalan normal
   - Kuning = jalan lambat
   - Merah  = stop (blink)

✔ Startup:
- LED hijau blink cepat 1 detik

LOGIKA JARAK:
----------------------------------------------------
< 5 cm   → STOP (merah blink)
5–10 cm  → JALAN LAMBAT (kuning)
> 10 cm  → JALAN NORMAL (hijau)

PIN CONFIG:
----------------------------------------------------
SERVO:
- DK (depan kiri)   = 8
- BK (belakang kiri)= 9
- DN (depan kanan)  = 10
- BN (belakang kanan)= 11

HC-SR04:
- TRIG = 2
- ECHO = 3

LED:
- MERAH  = 5
- KUNING = 6
- HIJAU  = 7

CATATAN POWER:
----------------------------------------------------
Gunakan power eksternal untuk servo (minimal 5V 3A)
untuk mencegah reset Arduino.
====================================================
*/

#include <Servo.h>

// =======================
// SERVO
// =======================
Servo DK;
Servo BK;
Servo DN;
Servo BN;

// =======================
// PIN SERVO
// =======================
const int PIN_DK = 8;
const int PIN_BK = 9;
const int PIN_DN = 10;
const int PIN_BN = 11;

// =======================
// HC-SR04
// =======================
const int TRIG = 2;
const int ECHO = 3;

// =======================
// LED
// =======================
const int LED_MERAH  = 5;
const int LED_KUNING = 6;
const int LED_HIJAU  = 7;

// =======================
// PARAMETER GERAK
// =======================
const int TENGAH = 90;
const int LANGKAH_LAMBAT = 25;
const int LANGKAH_NORMAL = 35;

// =======================
// MODE CONTROL
// =======================
int mode = 0;
int modeLama = -1;

// LOCK KUNING (anti flicker)
unsigned long lockKuningUntil = 0;

// =======================
// SETUP
// =======================
void setup() {
  DK.attach(PIN_DK);
  BK.attach(PIN_BK);
  DN.attach(PIN_DN);
  BN.attach(PIN_BN);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  pinMode(LED_MERAH, OUTPUT);
  pinMode(LED_KUNING, OUTPUT);
  pinMode(LED_HIJAU, OUTPUT);

  // STARTUP BLINK HIJAU 1 DETIK
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_HIJAU, HIGH);
    delay(100);
    digitalWrite(LED_HIJAU, LOW);
    delay(100);
  }

  berdiri();
  delay(1000);
}

// =======================
// LOOP UTAMA
// =======================
void loop() {

  int jarak = bacaJarak();
  unsigned long now = millis();

  // =======================
  // DETEKSI MODE
  // =======================
  if (jarak < 5) mode = 0;
  else if (jarak <= 10) mode = 1;
  else mode = 2;

  // =======================
  // LOCK MODE KUNING 3 DETIK
  // =======================
  if (now < lockKuningUntil) {
    if (mode == 2) mode = 1;
  }

  // =======================
  // MODE BERUBAH
  // =======================
  if (mode != modeLama) {

    berdiri();

    if (mode == 1) {
      tampilLED(LED_KUNING);
      lockKuningUntil = now + 3000;
      delay(500);
      matiLED();
    }

    if (mode == 2) {
      tampilLED(LED_HIJAU);
      delay(500);
      matiLED();
    }

    if (mode == 0) {
      // STOP tidak pakai delay transisi
      modeLama = mode;
    }

    modeLama = mode;
  }

  // =======================
  // EKSEKUSI GERAK
  // =======================

  if (mode == 0) {
    blinkMerah();
    berdiri();
  }

  if (mode == 1) {
    jalan(LANGKAH_LAMBAT, 300);
  }

  if (mode == 2) {
    jalan(LANGKAH_NORMAL, 180);
  }
}

// =======================
// GERAK WALKING
// =======================
void jalan(int langkah, int jeda) {

  DK.write(TENGAH - langkah);
  BN.write(TENGAH + langkah);
  BK.write(TENGAH);
  DN.write(TENGAH);
  delay(jeda);

  berdiri();
  delay(80);

  DN.write(TENGAH + langkah);
  BK.write(TENGAH - langkah);
  DK.write(TENGAH);
  BN.write(TENGAH);
  delay(jeda);

  berdiri();
  delay(80);
}

// =======================
// SENSOR JARAK
// =======================
int bacaJarak() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long durasi = pulseIn(ECHO, HIGH, 30000);
  return durasi * 0.034 / 2;
}

// =======================
// LED CONTROL
// =======================
void tampilLED(int pin) {
  digitalWrite(LED_MERAH, LOW);
  digitalWrite(LED_KUNING, LOW);
  digitalWrite(LED_HIJAU, LOW);
  digitalWrite(pin, HIGH);
}

void matiLED() {
  digitalWrite(LED_MERAH, LOW);
  digitalWrite(LED_KUNING, LOW);
  digitalWrite(LED_HIJAU, LOW);
}

// =======================
// STOP BLINK MERAH
// =======================
void blinkMerah() {
  digitalWrite(LED_MERAH, HIGH);
  delay(200);
  digitalWrite(LED_MERAH, LOW);
  delay(200);
}

// =======================
// BERDIRI
// =======================
void berdiri() {
  DK.write(TENGAH);
  BK.write(TENGAH);
  DN.write(TENGAH);
  BN.write(TENGAH);
}