#include "app_view.h"

RectangleShape surface_line(Vector2f(800 , 5));


my_window::my_window(const int _width, const int _height){
	width = _width;
	height = _height;
}
void my_window::close_aplication(){
    win.close();
}
my_window::~my_window(){}
void my_window::run_aplication(Player &player_1 , void run_aplication(RenderWindow &window , Event &eve)){
    surface_line.setPosition(Vector2f(0 , surface));
    win.create(VideoMode(width, height), "proyecto final");
    while(win.isOpen()){
      while (win.pollEvent(event))
      {
  	      if (event.type == Event::Closed){
              //deletes go here
              close_aplication();
          }
          if(Keyboard::isKeyPressed(Keyboard::Escape)){
              //deletes go here
              close_aplication();
          }
          run_aplication(win , event);
       }
      win.clear(Color(0,0,0));
      win.draw(player_1.get_player_canon());
      win.draw(player_1.get_player_body());
      win.draw(surface_line);
      win.display();
    }
  }
