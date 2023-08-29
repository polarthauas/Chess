#include "piece.hpp"
#include <iostream>

Piece::Piece(){
    DROOK = false;
    LROOK = false;

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

std::vector<std::vector<int>> Piece::check_possibles(int pos_x, int pos_y){
    std::string piece_c = board[pos_x][pos_y];
    std::vector<std::vector<int>> poss;
    if (piece_c[1] == 'P') {
        int direction = (piece_c[0] == 'D') ? -1 : 1;  // Black pieces move up (negative direction)
        int initial_row = (piece_c[0] == 'D') ? 6 : 1;  // Black's initial row is 6, White's initial row is 1

        if (pos_x == initial_row) {
            if (board[pos_x + 2 * direction][pos_y].empty()) {
                poss.push_back({pos_y, pos_x + 2 * direction});
            }
        }

        if (board[pos_x + 1 * direction][pos_y].empty()) {
            poss.push_back({pos_y, pos_x + 1 * direction});
        }

        if (pos_y > 0 && !board[pos_x + 1 * direction][pos_y - 1].empty() &&
            board[pos_x + 1 * direction][pos_y - 1][0] != piece_c[0]) {
            poss.push_back({pos_y - 1, pos_x + 1 * direction});
        }

        if (pos_y < 7 && !board[pos_x + 1 * direction][pos_y + 1].empty() &&
            board[pos_x + 1 * direction][pos_y + 1][0] != piece_c[0]) {
            poss.push_back({pos_y + 1, pos_x + 1 * direction});
        }
        return poss;
    }
    else if(piece_c[1]=='T'){
        for (int row = pos_x - 1; row >= 0; row--) {
            if (board[row][pos_y].empty()) {
                poss.push_back({pos_y, row});
            } else {
                if(board[row][pos_y][0] != piece_c[0]){
                    poss.push_back({pos_y, row});
                    break;
                }
                break;
            }
        }
        for (int row = pos_x + 1; row < 8; row++) {
            if (board[row][pos_y].empty()) {
                poss.push_back({pos_y, row});
            } else {
                if(board[row][pos_y][0] != piece_c[0]){
                    poss.push_back({pos_y, row});
                    break;
                }
                break;
            }
        }
        for (int col = pos_y - 1; col >= 0; col--) {
            if (board[pos_x][col].empty()) {
                poss.push_back({col, pos_x});
            } else {
                if (board[pos_x][col][0] != piece_c[0]) {
                    poss.push_back({col, pos_x});
                    break;
                }
                break;
            }
        }

        for (int col = pos_y + 1; col < 8; col++) {
            if (board[pos_x][col].empty()) {
                poss.push_back({col, pos_x});
            } else {
                if(board[pos_x][col][0] != piece_c[0]){
                    poss.push_back({col, pos_x});
                    break;
                }
                break;
            }
        }
        return poss;
        }
    else if(piece_c[1]=='B'){
        for (int step = 1; pos_x - step >= 0 && pos_y - step >= 0; step++) {
            if (board[pos_x - step][pos_y - step].empty()) {
                poss.push_back({pos_y - step, pos_x - step});
            } else if (board[pos_x - step][pos_y - step][0] != board[pos_x][pos_y][0]) {
                poss.push_back({pos_y - step, pos_x - step});
                break;
            } else {
                break;
            }
        }
        for (int step = 1; pos_x - step >= 0 && pos_y + step < 8; step++) {
            if (board[pos_x - step][pos_y + step].empty()) {
                poss.push_back({pos_y + step, pos_x - step});
            } else if (board[pos_x - step][pos_y + step][0] != board[pos_x][pos_y][0]) {
                poss.push_back({pos_y + step, pos_x - step});
                break;
            } else {
                break;
            }
        }

        for (int step = 1; pos_x + step < 8 && pos_y - step >= 0; step++) {
            if (board[pos_x + step][pos_y - step].empty()) {
                poss.push_back({pos_y - step, pos_x + step});
            } else if (board[pos_x + step][pos_y - step][0] != board[pos_x][pos_y][0]) {
                poss.push_back({pos_y - step, pos_x + step});
                break;
            } else {
                break;
            }
        }

        for (int step = 1; pos_x + step < 8 && pos_y + step < 8; step++) {
            if (board[pos_x + step][pos_y + step].empty()) {
                poss.push_back({pos_y + step, pos_x + step});
            } else if (board[pos_x + step][pos_y + step][0] != board[pos_x][pos_y][0]) {
                poss.push_back({pos_y + step, pos_x + step});
                break;
            } else {
                break;
            }
        }

        return poss;
    }
    else if(piece_c[1] =='H'){
        int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
        int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

        for (int i = 0; i < 8; i++) {
            int new_x = pos_x + dx[i];
            int new_y = pos_y + dy[i];

            if (new_x >= 0 && new_x < 8 && new_y >= 0 && new_y < 8) {
                if (board[new_x][new_y].empty() || board[new_x][new_y][0] != board[pos_x][pos_y][0]) {
                    poss.push_back({new_y, new_x});
                }
            }
        }

        return poss;
    }
    else if(piece_c[1] =='L'){
        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int d = 0; d < 8; d++) {
            for (int step = 1; step < 8; step++) {
                int new_x = pos_x + step * dx[d];
                int new_y = pos_y + step * dy[d];

                if (new_x < 0 || new_x >= 8 || new_y < 0 || new_y >= 8) {
                    break;
                }

                if (board[new_x][new_y].empty()) {
                    poss.push_back({new_y, new_x});
                } else {
                    if (board[new_x][new_y][0] != piece_c[0]) {
                        poss.push_back({new_y, new_x});
                    }
                    break;
                }
            }
        }

        return poss;
    }
    else if(piece_c[1] =='K'){
        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int d = 0; d < 8; d++) {
            int new_x = pos_x + dx[d];
            int new_y = pos_y + dy[d];

            if (new_x >= 0 && new_x < 8 && new_y >= 0 && new_y < 8) {
                if (board[new_x][new_y].empty() || board[new_x][new_y][0] != piece_c[0]) {
                    poss.push_back({new_y, new_x});
                }
            }
        }

        return poss;
    }

    return std::vector<std::vector<int>>();
}

void Piece::move_piece(int pos_iX, int pos_iY, int pos_fX, int pos_fY){
    if(this->check_move(pos_iX, pos_iY, pos_fX, pos_fY)){
        move == 'D' ? move = 'L' : move = 'D';
        board[pos_fX][pos_fY] = "";
        board[pos_fX][pos_fY] = board[pos_iX][pos_iY]; 
        board[pos_iX][pos_iY] = "";
    }
}