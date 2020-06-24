#include <Clp_Atmega_128.h>

void setup() {
  ioConfig();
}

void loop() {
  digitalWrite(S1, HIGH);
  delay(1000);
  digitalWrite(S1, LOW);
  delay(1000);
}