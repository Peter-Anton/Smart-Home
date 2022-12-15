#include <Arduino.h>
#include "water.h"
water::water( int analogInPin,int sensorValue){
  _analogInPin=analogInPin; 
  
  _sensorValue=sensorValue;

}
float water::getwaterLevel(){
 
 float sensorValue=analogRead(_analogInPin);
 return sensorValue;

}