#include <WiFi.h> 
#include <MQTT.h> 
 
 
const char* ssid = "TP-Link Billiard"; 
const char* password = "9bolasodok"; 
 
 
const char* mqtt_server = "billiard.cloud.shiftr.io"; 
const int mqtt_port = 1883; 
const char* mqtt_user = "billiard"; 
const char* mqtt_password = "r9een8BWhekFEQi1"; 
 
 
const char* device_id = "esp32b"; 
const char* topic_subscribe = "table/esp32b/relay"; 
const int RELAY_PIN = 26; 
 
WiFiClient net; 
MQTTClient mqttClient(512); 
 
void connectToWiFi() { 
  Serial.print("Menghubungkan ke WiFi..."); 
  WiFi.begin(ssid, password); 
   
  while (WiFi.status() != WL_CONNECTED) { 
    delay(500); 
    Serial.print("."); 
  } 
   
  Serial.println("\nWiFi terhubung!"); 
} 
 
void connectToMqtt() { 
  Serial.print("Menghubungkan ke MQTT..."); 
  while (!mqttClient.connect(device_id, mqtt_user, mqtt_password)) { 
    Serial.print("."); 
    delay(1000); 
  } 
   
  Serial.println("\nTerhubung ke MQTT!"); 
  mqttClient.subscribe(topic_subscribe); 
  Serial.print("Berlangganan topik: "); 
  Serial.println(topic_subscribe); 
} 
 
void messageReceived(String &topic, String &payload) { 
  Serial.print("Pesan diterima di topik: "); 
  Serial.println(topic); 
  Serial.print("Isi pesan: "); 
  Serial.println(payload); 
 
  // Kontrol relay berdasarkan pesan 
  if (payload == "0") { 
    digitalWrite(RELAY_PIN, HIGH); 
    Serial.println("Relay ON"); 
  } else { 
    digitalWrite(RELAY_PIN, LOW); 
    Serial.println("Relay OFF"); 
  }  
} 
 
void setup() { 
  Serial.begin(115200); 
  pinMode(RELAY_PIN, OUTPUT); 
  digitalWrite(RELAY_PIN, LOW); 
 
  connectToWiFi(); 
 
  mqttClient.begin(mqtt_server, net); 
  mqttClient.onMessage(messageReceived); 
 
  connectToMqtt(); 
} 
 
void loop() { 
  // Pastikan tetap terhubung ke MQTT 
  if (!mqttClient.connected()) { 
    connectToMqtt(); 
  } 
  mqttClient.loop(); 
}