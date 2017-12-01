#include "general_objects.h"

App_Color::App_Color(){
    red = 255;
    green = 255;
    blue = 255;
}
App_Color::App_Color(const int red , const int green , const int blue){
    this->red = red;
    this->green = green;
    this->blue = blue;
}
App_Color::~App_Color(){}

Point::Point(){
    x = 0.0;
    y = 0.0;
}
Point::Point(float x , float y){
    this->x = x;
    this->y = y;
}
Point::~Point(){}
