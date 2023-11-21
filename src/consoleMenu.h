#include <string>

class consoleMenu;


typedef struct
{
    int id;
    std::string title;
    void (consoleMenu::*run1)();

}Smenu;


class consoleMenu 
{

  public:
      void read();
      void exit();
      consoleMenu(Smenu *);
      void run();
    
  private:
      Smenu *menu_items;
      void readCommand();
      void renderMenu();
     
  
};

