#include "bomb.h"

class Player{//creating my player class
protected:
  Point player_position;
  Point canon_position;
  RectangleShape canon;
  RectangleShape life;
  RectangleShape force_player;
  CircleShape body;
  int player_life = 100;
  int force = 0;
  float angle = 90.0;
public:
  Player();
  Player(const float _x , const float _y);
  Point get_player_position();
  CircleShape get_player_body();
  RectangleShape get_player_canon();
  void set_force(const int _force);
  int get_force();
  void move_right();
  void move_left();
  void left_canon();
  void right_canon();
  void launch_bomb(RenderWindow &win , Bomb &bomb , RectangleShape &surface_line);

};

