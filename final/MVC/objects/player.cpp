#include "player.h"


Player::Player(){}
Player::Player(const float _x , const float _y){
    player_position.x = _x;
    player_position.y = _y;
    canon_position .x = _x + 10;
    canon_position.y = _y + 10;
    canon.setOrigin(Vector2f(3,0));
    canon.setSize(Vector2f(6,-20));
    canon.setPosition(canon_position.x , canon_position.y);
    body.setRadius(default_player_size);
    body.setPosition(player_position.x , player_position.y);
}
Point Player::get_player_position(){
    return player_position;
}
CircleShape Player::get_player_body(){
    return body;
}
RectangleShape Player::get_player_canon(){
    return canon;
}
void Player::set_force(const int _force){
    force = _force;
}
int Player::get_force(){
    return force;
}
void Player::move_right(){
    Point *tmp = new Point (1.0 , 0.0);
    player_position.x += tmp->x;
    canon_position.x += tmp->x;
    canon.move(canon_position.x, canon_position.y);
    body.move(player_position.x, player_position.y);
    delete tmp;
}
void Player::move_left(){
    Point *tmp = new Point (-1.0 , 0.0);
    player_position.x += tmp->x;
    canon_position.x += tmp->x;
    canon.move(canon_position.x, canon_position.y);
    body.move(player_position.x, player_position.y);
    delete tmp;
}
void Player::left_canon(){
    if(canon.getRotation() > 270 || canon.getRotation() <= 90){
        canon.rotate(-1);
        angle += 1.0;
    }
}
void Player::right_canon(){
    if(canon.getRotation() < 90 || canon.getRotation() >= 270){
        canon.rotate(1);
        angle -= 1.0;
    }
}
void Player::launch_bomb(RenderWindow &win , Bomb &bomb , RectangleShape &surface_line){
    while (bomb.get_bomb_position().y+5 <= surface){
      win.clear(Color(0,0,0));
      win.draw(body);
      win.draw(canon);
      win.draw(bomb.get_bomb());
      win.draw(surface_line);
      bomb.parabolic_motion();
      win.display();
    }

}
