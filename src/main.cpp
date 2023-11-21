#ifdef ARDUINO
#include <SoftwareSerial.h>
#endif
#include "test.h"
#include "consoleMenu.h"



#ifdef ARDUINO
void setup() {
    
  Serial.begin(9600);
  //configureSerial();
  //Serial.println();
  // put your setup code here, to run once:
}

void loop() 
{
  menu.add();
  menu.run();
  
  
  delay(1000);
  // put your main code here, to run repeatedly:
}
#else

int main()
{
    Smenu m[] = 
    {
        1,"m1",
        2,"m2", 
        3,"m3", 
        4,"exit",

        NULL,
    };
   
    consoleMenu menu(m);
    
    menu.run();
    

    return 0;
}


#endif