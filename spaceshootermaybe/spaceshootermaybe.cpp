// spaceshootermaybe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Game.h"

int main()
{
    Game myGame;

    myGame.Loop();
}

/*
#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{

    sf::RenderWindow window(sf::VideoMode(1290, 720), "works");

#
    sf::Texture texture;
    texture.loadFromFile("coblaser.png");

    sf::Sprite laser;
    laser.setTexture(texture);
    laser.setRotation(90);
    laser.setScale(0.5f, 0.5f);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseMoved)
            {
                laser.setPosition(event.mouseMove.x, event.mouseMove.y);
            }
        }

        window.clear();
        window.draw(laser);
        window.display();

    }

    return 0;

}


*/