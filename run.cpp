#include <iostream>
#include <string>
#include <random>
#include <ctime>

#include "Entities.hpp"

// game loop
void run(){
    bool quitRun = false;
    while (quitRun == false) {
        switch (randNum(1, 2)) {
            case 1:
                encounter();
                break;
            case 2:
                std::cout << "You start to search for items.\n";
                break;
            default:
                std::cout << "An error occured.\n";
        }
        quitRun = true;
    }
}

void encounter(){
    
    switch (randNum2(1,2)) {
        case 1: 
            std::cout << "You have encounterd a Goblin!\n";
            break;
        case 2:
            std::cout << "You have encountered a Theif!\n";
            break;
        default:
            std::cout << "An error occured.\n";
    }
}

// Generate random numbers
int randNum(int r1, int r2){
    std::mt19937 mtRandomEngine(time(NULL));
    // std::default_random_engine randomEngine(time(NULL));
    std::uniform_int_distribution<int> randomNum(r1, r2);
    int rnd = randomNum(mtRandomEngine);
    std::cout << rnd << std::endl;
    return rnd;
}

// Generate random numbers
int randNum2(int r1, int r2){
    std::mt19937 mtRandomEngine(time(NULL)+36);
    // std::default_random_engine randomEngine(time(NULL));
    std::uniform_int_distribution<int> randomNum(r1, r2);
    int rnd = randomNum(mtRandomEngine);
    std::cout << rnd << std::endl;
    return rnd;
}