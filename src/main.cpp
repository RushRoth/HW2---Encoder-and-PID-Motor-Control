#include <Arduino.h>


void setup() {
  //ledcAttachPin(9, 5000, 8);
}

void loop() {
  analogWrite(9, 255);
  delay(1000);
  analogWrite(9, 127);
  delay(1000);
  analogWrite(9, 0);
  delay(1000);
  analogWrite(10, 255);
  delay(1000);
  analogWrite(10, 0);
  delay(1000);
}
