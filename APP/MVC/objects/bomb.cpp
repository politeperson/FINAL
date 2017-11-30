#include "bomb.h"

Bomb::Bomb(){}
Bomb::Bomb(float origin_x){
	bomb_color(255 , 255 , 255);
	proyectile(default_bomb_size);
	C(origin_x , 0.0);
	this->v_0 = 0.0;
	this->angle = 0.0;
	range = 0.0;
	height = 0.0;
	V(range / 2 , height);
	parameter = calculate_parameter(V.x , V.y);
	calculate_time(time , v_0 , angle);
}
Bomb::Bomb(float v_0 , float angle , float origin_x){
	this->v_0 = v_0;
	this->angle = angle;
	range = calculate_range(v_0 , angle);
	height = calculate_height(v_0 , angle);
	V(range / 2 , height);
	parameter = calculate_parameter(V.x , V.y);
	calculate_time(time , v_0 , angle);
	C(origin_x , 0.0);
	parameter = abs(parameter);
}
template <typename float>
Bomb::Point<float> get_bomb_position(){
	return C;
}
Bomb::CircleShape get_bomb(){
	return proyectile;
}
Bomb::void set_bomb_color(const int _R , const int _G , const int _B){
	bomb_color.red = _R;
	bomb_color.green = _G;
	bomb_color.blue = _B;
}
Bomb::void parabolic_motion(){
	if (angle > 90)
       	C.x -= 0.1;
   	else
        C.x += 0.1;
    C.y=(pow(C.x -V.x, 2)/ (4*parameter))+V.y;
    proyectile.setPosition(C.x,C.y);
}
Bomb::~Bomb(){}