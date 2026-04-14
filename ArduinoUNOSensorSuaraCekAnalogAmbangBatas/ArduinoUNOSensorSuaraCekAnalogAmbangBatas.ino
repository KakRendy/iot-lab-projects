int batas;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  batas = analogRead(A2);
  Serial.println(batas);
}