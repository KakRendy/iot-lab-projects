// Tentukan pin LED (gunakan GPIO 13 sebagai contoh)
const int ledPin = 13;

void setup() {
  // Inisialisasi pin LED sebagai output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Nyalakan LED
  digitalWrite(ledPin, HIGH);
  // Tunggu selama 1 detik (1000 milidetik)
  delay(1000);

  // Matikan LED
  digitalWrite(ledPin, LOW);
  // Tunggu selama 1 detik lagi
  delay(1000);
}
