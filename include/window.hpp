#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "piece.hpp"

class Window{
public:
    Window(int w, int h): width(w),height(h), win(sf::VideoMode(width,height), "Chess"){};

    ~Window();

    void main_looping();

    void draw();

private:
    const int TAB_X=180, TAB_Y=40;
    int width, height;
    Piece pieces;
    sf::RenderWindow win;
    void allEvents();
    void draw_pieces();
};
