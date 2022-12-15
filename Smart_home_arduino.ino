#include "Door.h"
#include <Arduino.h>
#include "Temp.h"
#include "water.h"
Door door1(0, 90, 9);
Temp temp1;
water Water1(A0,0);
void setup() {
  door1.setup();
  temp1.setup();

}

void loop() {
  door1.open();
  delay(2000);
  door1.close();
  delay(2000);
  temp1.getTemperature();
  Water1.getwaterLevel();
}
