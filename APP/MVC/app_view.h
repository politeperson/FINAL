#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include "objects/player.h"


using namespace std;
using namespace sf;


class my_window {
  RenderWindow win;
  Event event;
  int width,height;
public:
  my_window(const int _width, const  int _height){}
  void close_aplication(){}
  void run_aplication(Player &player_1){}
  ~my_window(){}
};

/*
class app_view
{
public:
  app_view();
  ~app_view();

};*/


