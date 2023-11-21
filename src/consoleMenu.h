#include <string>


typedef struct
{
    int id;
    std::string title;

}Smenu;


class consoleMenu 
{

  public:
      consoleMenu(Smenu *);
      void run();
    
  private:
      Smenu *menu_items;
      void readCommand();
      void renderMenu();
     
  
};

