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
        1,"m1",&consoleMenu::read,
        2,"m2",&consoleMenu::read,
        3,"m3",&consoleMenu::read, 
        4,"exit",&consoleMenu::exit,
        NULL,
    };
   
    consoleMenu menu(m);
    
    menu.run();
    

    return 0;
}


#endif