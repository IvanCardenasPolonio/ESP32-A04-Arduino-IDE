void setup() {
  pinMode(2, OUTPUT);      // GPIO 2 = LED de la placa
  Serial.begin(115200);
}

void loop() {
  digitalWrite(2, HIGH);   // Enciende el LED
  Serial.println("LED encès");
  delay(1000);
  digitalWrite(2, LOW);    // Apaga el LED
  Serial.println("LED apagat");
  delay(1000);
}