#include <SoftwareSerial.h>
#include "test.h"
#include "serialMenu.h"

serialMenu menu;


void setup() {
    
  Serial.begin(9600);
  //configureSerial();
  //Serial.println();
  // put your setup code here, to run once:
}

void loop() 
{
  menu.run();
  
  
  delay(1000);
  // put your main code here, to run repeatedly:
}
