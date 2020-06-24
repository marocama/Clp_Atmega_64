#include <Clp_Atmega_128.h>

void setup() {
  ioConfig();
}

void loop() {
  if(digitalRead(E1)) {
    digitalWrite(S1, HIGH);
  } else {
    digitalWrite(S1, LOW);
  }
}