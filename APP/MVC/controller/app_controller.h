#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Time.hpp>
#include <utility>
using namespace std;
using namespace sf;
class app_controller{
 public://only functions i think or not?
  void player_update_position(int n, RectangleShape &canon, CircleShape &player);
  void move_player_right(RectangleShape &canon, CircleShape &player);
  
  void move_player_left(RectangleShape &canon, CircleShape &player);
  
  void move_player_left(RectangleShape &canon, CircleShape &player);
  
  void turn_right_canon(RectangleShape &canon);
  
  void turn_left_canon(RectangleShape &canon);

};


void app_controller::player_update_postition(int n, RectangleShape &canon, CircleShape &player){
  switch (n){
  case 1://move right
    app_controller::move_player_right(canon , player);
    break;
  case 2://move left
    app_controller::move_player_right(canon , player);
    break;
  case 3://turn left canon
    app_controller::turn_left_canon(canon);
    break;
  case 4://turn right canon
    app_controller::turn_right_canon(canon);
    break;
  }
}
void app_cntroller::move_player_right(RectangleShape &canon, CircleShape &player){
  par *tmp = new par;
  tmp.first = 1;
  tmp.second = 0;
  canon.move(tmp.first, tmp.second);
  Player.move(tmp.first,tmp.second);
  delete tmp;
}

void app_controller::move_player_left(RectangleShape &canon, CircleShape &player){
  par *tmp = new par;
  tmp.first = -1;
  tmp.second = 0;
  canon.move(tmp.first,tmp.second);
  player.move(tmp.first,tmp.second);
  delete tmp;
}

void app_controller::turn_right_canon(RectangleShape &canon){
  canon.rotate(1);
}

void app_controller::turn_left_canon(RectangleShape &canon){
  canon.rotate(-1);
}
