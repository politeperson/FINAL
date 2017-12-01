#include "MVC/app_controller.h"
#include <SFML/Graphics/RenderWindow.hpp>
using namespace std;
using namespace sf;


int main(){
    Controller app_controller;
    my_window window(800 , 600);
    app_controller.run_Controller(window.get_window() , window.get_event());
    window.run_aplication(player_1);


  return 0;
}
