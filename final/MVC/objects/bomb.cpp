#include "bomb.h"

Bomb::Bomb(){}
Bomb::Bomb(float origin_x){
    bomb_color.red = 255;
    bomb_color.green = 255;
    bomb_color.blue = 255;
	proyectile.setRadius(default_bomb_size);
	C.x = origin_x;
	C.y = 0.0;
	this->v_0 = 0.0;
	this->angle = 0.0;
	range = 0.0;
	height = 0.0;
	V.x = range / 2;
	V.y = height;
	parameter = calculate_parameter(V.x , V.y);
}
Bomb::Bomb(float v_0 , float angle , float origin_x){
	this->v_0 = v_0;
	this->angle = angle;
	range = calculate_range(v_0 , angle);
	height = calculate_height(v_0 , angle);
	V.x = range / 2;
	V.y = height;
	parameter = calculate_parameter(V.x , V.y);
	C.x = origin_x;
	C.y = 0.0;
	parameter = abs(parameter);
}
Point Bomb::get_bomb_position(){
	return C;
}
CircleShape Bomb::get_bomb(){
	return proyectile;
}
void Bomb::set_bomb_color(const int _R , const int _G , const int _B){
	bomb_color.red = _R;
	bomb_color.green = _G;
	bomb_color.blue = _B;
}
void Bomb::parabolic_motion(){
	if (angle > 90)
       	C.x -= 0.1;
   	else
        C.x += 0.1;
    C.y=(pow(C.x -V.x, 2)/ (4*parameter))+V.y;
    proyectile.setPosition(C.x,C.y);
}
Bomb::~Bomb(){}
