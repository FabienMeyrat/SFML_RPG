//
// Created by Fabien Meyrat on 03/08/2021.
//

#ifndef SFML_RPG_GAME_H
#define SFML_RPG_GAME_H

#include <iostream>

#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"


class Game {

private:
    // Variables
    sf::RenderWindow *m_window;
    sf::Event m_sfEvent;

    sf::Clock m_dtClock;
    float m_dt;

    // Initialization
    void initWindow();

public:
    // Constructors - Destructors
    Game();
    virtual ~Game();

    // Functions
    void updateSFMLEvents();
    void updateDt();
    void update();
    void render();
    void run();

};


#endif //SFML_RPG_GAME_H
