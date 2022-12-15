#ifndef Temp_h
#define Temp_h
#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 2
class Temp { 
   public:
   Temp();
   void setup();
   float getTemperature();
   
   private:
   int _pin;


};

#endif