#include "window.hpp"
#include "piece.hpp"
#include <iostream>

Window::~Window(){

}

void Window::draw_pieces(){

    sf::Texture text_sprites;
    if(!text_sprites.loadFromFile("../pcqrGKzLi.png")){
        return ;
    }

    int spriteWidth = 334;
    int spriteHeight = 333;
    int numRows = 2;
    int numCols = 8;

    std::vector<sf::Sprite> sprites;
        for (int row = 0; row < numRows; row++) {
            for (int col = 0; col < numCols; col++) {
                sf::IntRect spriteRect(col * spriteWidth, row * spriteHeight, spriteWidth, spriteHeight);
                sf::Sprite sprite(text_sprites, spriteRect);
                sprite.setScale(56/sprite.getGlobalBounds().width,
                56 / sprite.getGlobalBounds().height);
                sprites.push_back(sprite);
        }
    }

    Piece pieces;
    for (int row = 0; row < 8; row++) {
        for (int column = 0; column < 8; column++) {
            auto true_piece = pieces.board[row][column];
            char aux = true_piece[0];
            if(true_piece=="LTOWER1" || true_piece=="LTOWER2"){
                auto PIECE = sprites[4];
                PIECE.setPosition(180+column*56, 40+(-row+7)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="LHORSE1"||true_piece=="LHORSE2"){
                auto PIECE = sprites[3];
                PIECE.setPosition(180+column*56, 40+(-row+7)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="LBISHOP1"||true_piece=="LBISHOP2"){
                auto PIECE = sprites[2];
                PIECE.setPosition(180+column*56, 40+(-row+7)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="LLADY"){
                auto PIECE = sprites[1];
                PIECE.setPosition(180+column*56, 40+(-row+7)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="LKING"){
                auto PIECE = sprites[0];
                PIECE.setPosition(180+column*56, 40+(-row+7)*56);
                win.draw(PIECE);
            }
            else if(aux == 'L'){
                auto PIECE = sprites[5];
                PIECE.setPosition(180+column*56, 40+(-row+7)*56);
                win.draw(PIECE);
            }
            if(true_piece=="RTOWER1" || true_piece=="RTOWER2"){
                auto PIECE = sprites[10];
                PIECE.setPosition(180+column*56, 40+(row)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="RHORSE1"||true_piece=="RHORSE2"){
                auto PIECE = sprites[9];
                PIECE.setPosition(180+column*56, 40+(row)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="RBISHOP1"||true_piece=="RBISHOP2"){
                auto PIECE = sprites[8];
                PIECE.setPosition(180+column*56, 40+(row)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="RLADY"){
                auto PIECE = sprites[7];
                PIECE.setPosition(180+column*56, 40+(row)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="RKING"){
                auto PIECE = sprites[6];
                PIECE.setPosition(180+column*56, 40+(row)*56);
                win.draw(PIECE);
            }
            else if(aux == 'R'){
                auto PIECE = sprites[11];
                PIECE.setPosition(180+column*56, 40+(row)*56);
                win.draw(PIECE);
            }
        }
    }
}

void Window::draw(){
    sf::RectangleShape tab(
        sf::Vector2f(448.0f, 448.0f));
    
    tab.setFillColor(sf::Color::Transparent);
    tab.setOutlineColor(sf::Color::Red);
    tab.setOutlineThickness(5.0f);
    tab.setPosition(180.0f, 40.0f);

    win.draw(tab);

    float cellSize = 448.0f / 8;

    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            sf::RectangleShape cell(sf::Vector2f(cellSize, cellSize));

            cell.setPosition(180.0f + col * cellSize, 40.0f + row * cellSize);

            if ((row + col) % 2 == 0) {
                cell.setFillColor(sf::Color::White);
            } else {
                cell.setFillColor(sf::Color::Black);
            }

            win.draw(cell);
        }
    }
    this->draw_pieces();
}

void Window::allEvents(){
    sf::Event event;
    while(win.pollEvent(event)){
        if(event.type == sf::Event::Closed){
            win.close();
        }
    }
}
void Window::main_looping(){
    while(win.isOpen()){
        this->allEvents();

        win.clear();
        this->draw();
        win.display();
    }
    return;
}
