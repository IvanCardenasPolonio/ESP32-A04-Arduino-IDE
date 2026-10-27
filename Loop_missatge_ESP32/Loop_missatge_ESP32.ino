#include <dummy.h>

void setup() {
  Serial.begin(115200); // Ha de coincidir amb el Monitor Sèrie
  Serial.println("Programa ESP32 inicialitzat!");
}

void loop() {
  Serial.println("Loop executat.");
  delay(2000);
}