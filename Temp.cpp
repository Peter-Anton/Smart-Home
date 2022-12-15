#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include "Temp.h"
#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
DeviceAddress insideThermometer;
Temp::Temp(){


}
void Temp::setup(){
  sensors.setResolution(insideThermometer, 9);
}
float Temp::getTemperature()
{
  sensors.requestTemperatures();
  float tempC = sensors.getTempC(insideThermometer);
  if(tempC == DEVICE_DISCONNECTED_C) 
  {
    return -375;
  }
 
  return tempC;
}

