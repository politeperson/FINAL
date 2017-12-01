#include "objects/player.h"

using namespace std;
using namespace sf;


class my_window {
  RenderWindow win;
  Event event;
  int width,height;
public:

  my_window(const int _width, const  int _height);
  Event &get_event(){
    return event;
  }
  RenderWindow &get_window(){
    return win;
  }
  void close_aplication();
  void run_aplication(Player &player_1);
  ~my_window();

};
