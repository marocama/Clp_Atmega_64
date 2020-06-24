#include <Clp_Atmega_128.h>

void setup() {
  ioConfig();
  RS232.begin(9600);
  delay(100);
}

void loop() {
  RS232.write(254);
  RS232.write(128); 
  RS232.print("CLP Atmega 64");
  delay(1000);
}