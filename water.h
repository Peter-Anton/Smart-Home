#ifndef water_h
#define water_h
#include <Arduino.h>
class water { 
   public:
   water( int analogInPin,int sensorValue);
   void setup();
   float getwaterLevel();
   
   private:
    int _analogInPin;
   int _sensorValue ;
   
};

#endif