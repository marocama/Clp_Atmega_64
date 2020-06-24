#include <Clp_Atmega_128.h>

void setup() {
  ioConfig();
}

void loop() {
  digitalReverse(S1);
  delay(1000);
}