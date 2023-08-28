#pragma once

#include <map>
#include <string>
#include <iostream>
#include <vector>

class Piece{
public:
    Piece();
    const std::string PieceType[32] = {
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

    void move_piece(int pos_iX, int pos_iY, int pos_fX, int pos_fY);

    bool check_move(int pos_iX, int pos_iY, int pos_fX, int pos_fY);

};
