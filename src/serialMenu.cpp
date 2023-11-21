#ifdef ARDUINO
#include <Arduino.h>
#include <SoftwareSerial.h>

#include "serialMenu.h"

serialMenu::serialMenu() 
{
 
}

void serialMenu::readCommand()
{
  if(!Serial.available())
    return;
  
  char sign = Serial.read();
  
  if(sign == '0')
      this->renderMenu();

}

void serialMenu::renderMenu()
{
  Serial.print("\nmenu\n");
  Serial.print("1. config\n");
  Serial.print("2. test\n");
  Serial.print("0. menu\n");
}


void serialMenu::run() 
{
  this->readCommand();
}
#endif