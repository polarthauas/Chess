#pragma once

#include <map>
#include <string>
#include <iostream>
#include <vector>

class Piece{
public:
    Piece();
    std::string PieceType[32] = {
        "DTOWER1",
        "DHORSE1",
        "DBISHOP1",
        "DLADY",
        "DKING",
        "DBISHOP2",
        "DHORSE2",
        "DTOWER2",
        "DP1",
        "DP2",
        "DP3",
        "DP4",
        "DP5",
        "DP6",
        "DP7",
        "DP8",
        "LTOWER1",
        "LHORSE1",
        "LBISHOP1",
        "LLADY",
        "LKING",
        "LBISHOP2",
        "LHORSE2",
        "LTOWER2",
        "LP1",
        "LP2",
        "LP3",
        "LP4",
        "LP5",
        "LP6",
        "LP7",
        "LP8"
    };
    std::vector<std::vector<std::string>> board;

    void move_piece(std::string name, int pos,
    int8_t color);

    bool check_move(std::string name, int pos,
    int8_t color);

};

Piece::Piece(){
    board = std::vector<std::vector<std::string>>(8, std::vector<std::string>(8));
    for(int i = 0; i < 16; i++) {
        if(i < 8) {
            board[0][i] = PieceType[i+16];
        } else {
            board[1][i-8] = PieceType[i+16];
        }
    }
    for(int i = 0; i < 16; i++) {
        if(i < 8) {
            board[7][i] = PieceType[i];
        } else {
            board[7][i-8] = PieceType[i];  
        }
    }
}