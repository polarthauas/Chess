#include "outTab.hpp"

ChessTimer::ChessTimer(double time){
    this->initial_time = time;
    start_time = std::chrono::high_resolution_clock::now();
}
