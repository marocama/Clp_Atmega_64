#include <Clp_Atmega_128.h>

int valueAnalog = 0;

void setup() {
  ioConfig();
  RS232.begin(9600);
  analogConfig();
  delay(100);
}

void loop() {
  valueAnalog = analogRead();
  RS232.write(254);
  RS232.write(1); 
  RS232.print("> ");
  RS232.print(valueAnalog);
  delay(1000);
}