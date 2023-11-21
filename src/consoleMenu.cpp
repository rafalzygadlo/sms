#ifdef ARDUINO
#include <Arduino.h>
#include <SoftwareSerial.h>
#endif
#include "consoleMenu.h"



consoleMenu::consoleMenu(Smenu *menu) 
{
	menu_items = menu;
}

void consoleMenu::readCommand()
{
  
}

void consoleMenu::renderMenu()
{
	do{
		printf("%s\n",menu_items->title.c_str());
		menu_items++;
	} while (menu_items->id != NULL);
}


void consoleMenu::run()
{
	this->renderMenu();
  //this->readCommand();
}
