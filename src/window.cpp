#include "window.hpp"

Window::~Window(){

}

void Window::draw_pieces(){
    sf::Texture text_sprites;
    if(!text_sprites.loadFromFile("../PiecesSprite.png")){
        return ;
    }

    const int spriteWidth = 334, spriteHeight = 333;
    const int numRows = 2, numCols = 8;

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
            else if(true_piece=="DTOWER1" || true_piece=="DTOWER2"){
                auto PIECE = sprites[12];
                PIECE.setPosition(180+column*56, 40+(7-row)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="DHORSE1"||true_piece=="DHORSE2"){
                auto PIECE = sprites[11];
                PIECE.setPosition(180+column*56, 40+(7-row)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="DBISHOP1"||true_piece=="DBISHOP2"){
                auto PIECE = sprites[10];
                PIECE.setPosition(180+column*56, 40+(7-row)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="DLADY"){
                auto PIECE = sprites[9];
                PIECE.setPosition(180+column*56, 40+(7-row)*56);
                win.draw(PIECE);
            }
            else if(true_piece=="DKING"){
                auto PIECE = sprites[8];
                PIECE.setPosition(180+column*56, 40+(7-row)*56);
                win.draw(PIECE);
            }
            else if(aux == 'D'){
                auto PIECE = sprites[13];
                PIECE.setPosition(180+column*56, 40+(7-row)*56);
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
    tab.setPosition(TAB_X, TAB_Y);

    win.draw(tab);

    float cellSize = 448.0f / 8;

    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            sf::RectangleShape cell(sf::Vector2f(cellSize, cellSize));

            cell.setPosition(TAB_X + col * cellSize, TAB_Y + row * cellSize);

            if ((row + col) % 2 == 0) {
                cell.setFillColor(sf::Color::Green);
            } else {
                cell.setFillColor(sf::Color::Blue);
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
        else if (event.type == sf::Event::MouseButtonPressed) {
            if (event.mouseButton.button == sf::Mouse::Left) {
                sf::Vector2i mousePosition = sf::Mouse::getPosition(win);
                sf::Vector2f worldMousePosition = win.mapPixelToCoords(mousePosition);
                
                int column = (worldMousePosition.x - TAB_X) / 56;
                int row = 8 - (worldMousePosition.y - TAB_Y) / 56;

                if (row >= 0 && row < 8 && column >= 0 && column < 8) {
                    pieces.move_piece(row, column, 2, 2);
                }
            }
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
