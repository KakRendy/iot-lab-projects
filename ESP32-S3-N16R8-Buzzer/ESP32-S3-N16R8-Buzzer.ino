// Tentukan pin buzzer
const int buzzerPin = 13;

void setup() {
  // Setel pin buzzer sebagai output
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Mainkan nada dengan frekuensi 1000 Hz selama 1 detik
  tone(buzzerPin, 1000);  // Mainkan suara pada 1000 Hz
  delay(1000);  // Tunggu selama 1 detik
  noTone(buzzerPin);  // Matikan suara
  delay(1000);  // Tunggu selama 1 detik
}