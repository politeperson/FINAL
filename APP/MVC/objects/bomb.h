#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include "general_objects.h"
#include "models/app_model.h"
using namespace std;
using namespace sf;


class Bomb{
protected:
  float angle,range;
  float height;
  float v_0;
  float parameter;
  Point <float> V;
  Point <float> C;
  Time time;
  App_Color bomb_color;
  CircleShape proyectile;
public:
	Bomb(){}
	Bomb(float origin_x);
	Bomb(float v_0 , float angle , float origin_x);
	Point <float> get_bomb_position();
	CircleShape get_bomb();
	void set_bomb_color(const int _R , const int _G , const int _B);
	void parabolic_motion();
  	~Bomb();
};
