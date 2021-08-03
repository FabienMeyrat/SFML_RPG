//
// Created by Fabien Meyrat on 03/08/2021.
//

#include "Game.h"

// Static functions

// Initializer functions
void Game::initWindow() {
    m_window = new sf::RenderWindow(sf::VideoMode(800, 600), "C++ SFML RPG");
}

// Constructors - Destructors
Game::Game() {
    initWindow();
}

Game::~Game() {
    delete m_window;
}

// Functions
void Game::updateSFMLEvents() {
    while (m_window->pollEvent(m_sfEvent)) {
        if (m_sfEvent.type == sf::Event::Closed)
            m_window->close();
    }
}

void Game::update() {
    updateSFMLEvents();
}

void Game::render() {
    m_window->clear();

    // Render

    m_window->display();
}

void Game::run() {
    while (m_window->isOpen()) {
        update();
        render();
    }
}
