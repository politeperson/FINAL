#include <iostream>//cout
#include <SFML/Graphics.hpp> //RenderWindow and Shapes
#include <math.h>   //sin and cos
#include <stdlib.h> //abs

using namespace std;
using namespace sf;

/*MACROS*/
#define gravity 9.8
#define PI 3.14159
#define surface 500.0
#define default_player_size 10.0
#define default_bomb_size 5.0

//calculus
float calculate_range(float v_0 , float angle);
float calculate_height(float v_0, float angle);
float calculate_parameter(float V_x , float V_y);
float update_bomb_position(float C_x , float V_x , float V_y , float parameter);
