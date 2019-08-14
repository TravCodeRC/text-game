#include <iostream>
#include <string>
#include <random>
#include <ctime>

#include "Entities.hpp"

// Start game
void run(){
    // Create variables
    bool quitRun = false; 

    // Game loop
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
    int damage = 0;
    int crit = 0;
    
    switch (randNum2(1,2)) {
        case 1: 
            std::cout << "You have encounterd a Goblin!\n";
            Player goblin("Goblin", randNum(1, player.getLevel()), 10, 100, 100, 1);
            goblin.setMaxHealth(goblin.getLevel()*goblin.getMaxHealth()-20);
            goblin.setHealth(goblin.getMaxHealth());
            goblin.setStrength(goblin.getLevel()+randNum2(1,goblin.getLevel()));
            while (goblin.getHealth() > 0) {
                damage = attack(player.getLevel(), player.getStrength());
                if (randNum(1,100) <= 20) {
                    crit = randNum(1, player.getStrength())
                    if (crit > 0) {
                        std::cout << "Critical Hit!" << std::endl;
                    }
                }
                damage = damage + crit;
                goblin.setHealth(goblin.getHealth() - damage);
                std::cout << "You dealt " << damage << " to the " << goblin.getName() << std::endl << std::endl;
                std::cout << "Goblin" << std::endl;
                std::cout << "Health: " << goblin.getHealth() << "/" << goblin.getMaxHealth() << std::endl << std::endl;

            }
            
            break;
        case 2:
            std::cout << "You have encountered a Theif!\n";
            break;
        default:
            std::cout << "An error occured.\n";
    }
}

int attack(int l, int s){
    int damage;
    damage = l + s;
    return damage;
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