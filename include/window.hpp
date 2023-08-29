#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "piece.hpp"
#include "outTab.hpp"

class Window{
public:
    Window(int w, int h): width(w),height(h), win(sf::VideoMode(width,height), "Chess"),
    gameTimer(6000){};

    ~Window();

    void main_looping();

    void draw();

    void clock();

private:
    const int TAB_X=180, TAB_Y=40;
    int width, height;
    std::string selected_piece[3];
    std::vector<std::vector<int>> possibles;
    Piece pieces;
    ChessTimer gameTimer; 
    sf::RenderWindow win;
    void allEvents();
    void draw_pieces();
};
