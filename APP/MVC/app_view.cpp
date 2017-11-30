#include "app_view.h"


RectangleShape surface_line(Vector2f(800 , 5));
surface_line.setPosition(Vector2f(0 , surface));


my_window::my_window(const int _width, const int _height){
	width = _width;
	height = _height;
}
my_window::void close_aplication(){
    win.close();
}

my_window::void run_aplication(Player &player_1){
    win.create(VideoMode(width, height), "proyecto final");
    while(win.isOpen()){
    	cout << "asd" << endl;
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
          //run_Controller( win , event);
       }
      win.clear(Color(0,0,0));
      win.draw(player_1.get_player_canon());
      win.draw(player_1.get_player_body());
      win.display();
    }
  }