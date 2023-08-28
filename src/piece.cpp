#include "piece.hpp"

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
            board[6][i-8] = PieceType[i];  
        }
    }
}

bool Piece::check_move(int pos_iX, int pos_iY, int pos_fX, int pos_fY){
    return true;
}

void Piece::move_piece(int pos_iX, int pos_iY, int pos_fX, int pos_fY){
    if(this->check_move(pos_iX, pos_iY, pos_fX, pos_fY)){
        board[pos_fX][pos_fY] = board[pos_iX][pos_iY]; 
        board[pos_iX][pos_iY] = "";
    }
}