#include <Arduino.h>
#include <Servo.h>
#include "Door.h"

Servo servo;

Door::Door(int closeAngle,int openAngle,int pin){
_closeAngle=closeAngle;
_openAngle=openAngle;
_pin=pin;
}

void Door::setup() {
  servo.attach(_pin);
  
    // attaches the servo on pin 9 to the servo object
}


void Door::open(){
 for (_pos =_closeAngle; _pos <= _openAngle; _pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(_pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
void Door::close(){
  for (_pos = _openAngle; _pos >= _closeAngle; _pos -= 1) { // goes from 180 degrees to 0 degrees
    servo.write(_pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}