// Definisikan pin
const int sensorPin = A0;  // Pin input untuk sensor suara (analog)
const int ledPin = 13;     // Pin output untuk LED

// Variabel untuk deteksi suara
int sensorValue = 0;  
int threshold = 600; // Ambang batas deteksi suara, sesuaikan dengan kebutuhan
int clapCount = 0;   // Menyimpan jumlah tepukan yang terdeteksi
unsigned long lastClapTime = 0;  // Waktu tepukan terakhir
unsigned long debounceDelay = 500;  // Delay untuk menghindari deteksi tepukan berulang terlalu cepat

void setup() {
  pinMode(sensorPin, INPUT);  // Sensor suara sebagai input
  pinMode(ledPin, OUTPUT);    // LED sebagai output
  digitalWrite(ledPin, LOW);  // Mulai dengan LED mati
  Serial.begin(9600);         // Inisialisasi komunikasi serial untuk debugging
}

void loop() {
  sensorValue = analogRead(sensorPin);  // Membaca nilai analog dari sensor suara

  // Jika nilai sensor lebih besar dari ambang batas dan ada delay
  if (sensorValue > threshold && millis() - lastClapTime > debounceDelay) {
    // Setel waktu tepukan terakhir
    lastClapTime = millis();
    
    clapCount++;  // Tambahkan jumlah tepukan yang terdeteksi
    Serial.print("Tepukan ke-");
    Serial.println(clapCount);
    
    if (clapCount == 1) {
      digitalWrite(ledPin, HIGH);  // Menyalakan LED pada tepukan pertama
    }
    else if (clapCount == 2) {
      digitalWrite(ledPin, LOW);   // Mematikan LED pada tepukan kedua
      clapCount = 0;  // Reset jumlah tepukan setelah 2 tepukan
    }
    
    delay(300);  // Tunggu sebentar untuk menghindari deteksi suara berulang
  }
}