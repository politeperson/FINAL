#include "MVC/app_controller.h"
#include <SFML/Graphics/RenderWindow.hpp>
using namespace std;
using namespace sf;


int main(){

    my_window window(800 , 600);
    window.run_aplication(player_1);


  return 0;
}
/*
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
*/
