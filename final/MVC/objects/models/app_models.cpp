#include "app_models.h"

//calculus
float calculate_range(float v_0 , float angle){
	return (pow(v_0,2) * sin((2 * angle) * PI/180)) / 9.8;
}
float calculate_height(float v_0, float angle){
	return (pow(v_0,2) * pow(sin(angle * PI/180),2)) / (2*9.8);
}
float calculate_parameter(float V_x , float V_y){
	return pow(V_x, 2) / (4 *((surface - 10) - V_y));
}
float update_bomb_position(float C_x , float V_x , float V_y , float parameter){
	return (pow(C_x - V_x, 2) + (4 * V_y * parameter)) / (4 * parameter);
}
