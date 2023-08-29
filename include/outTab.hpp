#include <chrono>
#include <thread>

class ChessTimer{
public:
    ChessTimer(double time);

    void reset(){
        start_time = std::chrono::high_resolution_clock::now();
    }

    double elapsed(){
        auto end_time = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
        double elepsed_time = duration.count() * 0.001;
        return initial_time - elepsed_time; 
    }
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
    double initial_time;
};
