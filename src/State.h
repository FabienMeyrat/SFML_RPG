//
// Created by Fabien Meyrat on 03/08/2021.
//

#ifndef SFML_RPG_STATE_H
#define SFML_RPG_STATE_H

#include <vector>

#include "SFML/Graphics.hpp"

class State {

private:
    // Variables
    std::vector<sf::Texture> m_textures;

public:
    // Constructors - Destructors
    State();
    virtual ~State();

    // Functions
    virtual void update() = 0;
    virtual void render() = 0 ;

};


#endif //SFML_RPG_STATE_H
