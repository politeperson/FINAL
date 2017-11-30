#include <iostream>
#include <math.h>

using namespace std;
#define gravity 9.8
#define PI 3.14159
#define surface 500.0
#define default_player_size 10.0
#define default_bomb_size 5.0

/*Global variables 
const float gravity = 9.8;
const float PI = 3.14159;
const int surface = 500.0;
const float default_player_size = 10.0;
const int default_bomb_size = 5;
*/


//calculus
float calculate_range(float v_0 , float angle);
float calculate_height(float v_0, float angle);
/*
void calculate_time(Time &time, float v_0, float angle){
	float *t = new float;
	*t = (2*pow(v_0,2) * sin((2 * angle) )) / gravity;
	time = milliseconds(t / (calculate_range(v_0 , angle) / 0.01));
	delete t;
}*/
float calculate_parameter(float V_x , float V_y);
float update_bomb_position(float C_x , float V_x , float V_y , float parameter);




