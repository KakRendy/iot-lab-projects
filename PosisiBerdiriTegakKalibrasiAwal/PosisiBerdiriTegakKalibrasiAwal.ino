#include <Servo.h>

// Servo
Servo DK; // depan kiri
Servo BK; // belakang kiri
Servo DN; // depan kanan
Servo BN; // belakang kanan

// Pin
const int PIN_DK = 8;
const int PIN_BK = 9;
const int PIN_DN = 10;
const int PIN_BN = 11;

// Posisi
const int TENGAH = 90;
const int LANGKAH = 35;

void setup() {
  DK.attach(PIN_DK);
  BK.attach(PIN_BK);
  DN.attach(PIN_DN);
  BN.attach(PIN_BN);

  berdiri();
  delay(2000);
}

void loop() {

  // =========================
  // STEP 1: kiri + kanan belakang
  // =========================
  DK.write(TENGAH - LANGKAH);
  BN.write(TENGAH + LANGKAH);

  BK.write(TENGAH);
  DN.write(TENGAH);

  delay(300);

  berdiri();
  delay(100);

  // =========================
  // STEP 2: kanan + kiri belakang
  // =========================
  DN.write(TENGAH + LANGKAH);
  BK.write(TENGAH - LANGKAH);

  DK.write(TENGAH);
  BN.write(TENGAH);

   delay(300);

  berdiri();
  delay(100);
}

// =========================
// fungsi berdiri
// =========================
void berdiri() {
  DK.write(TENGAH);
  BK.write(TENGAH);
  DN.write(TENGAH);
  BN.write(TENGAH);
}