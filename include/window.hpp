#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Window{
public:
    Window(int w, int h): width(w),height(h), win(sf::VideoMode(width,height), "Chess"){};

    ~Window();

    void main_looping();

    void draw();

private:
    int width, height;
    sf::RenderWindow win;

    void allEvents();

    void draw_pieces();
};