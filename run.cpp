#include <iostream>
#include <string>
#include <random>
#include <ctime>

#include "Entities.hpp"
static Player *player;
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
    player = new Player();
    int mult = 4;
    int damageDone = 0;
    int crit = 0;

    //Goblin stats
    Player goblin("Goblin", randNum(1, player->getLevel()), 0, 100, 100, 1);
    //name, exp points, max health, health, strength 
    goblin.setValues("Goblin", 0, goblin.getLevel()*goblin.getMaxHealth(),goblin.getMaxHealth(), goblin.getLevel());
    goblin.setDamage(goblin.getStrength() * mult + goblin.getLevel());
    switch (randNum2(1,2)) {
        case 1:        
            std::cout << "You have encounterd a Goblin!\n";
                  
            while (goblin.getHealth() > 0) {
                std::cin.get();
                if (randNum(1,100) <= 20) {
                    crit = randNum(1, player->getDamage())*mult;
                    if (crit > 0) {
                        std::cout << "Critical Hit!" << std::endl;
                    }
                }
                damageDone = randNum(player->getStrength() + crit, player->getDamage() * mult + crit)+crit;
                goblin.setHealth(goblin.getHealth() - damageDone);
                std::cout << "You dealt " << damageDone << " to the " << goblin.getName() << std::endl << std::endl;
                std::cout << "Goblin" << std::endl;
                std::cout << "Health: " << goblin.getHealth() << "/" << goblin.getMaxHealth() << std::endl << std::endl;
                crit = 0;
                

            }
            
            break;
        case 2:
            std::cout << "You have encountered a Theif!\n";
            break;
        default:
            std::cout << "An error occured.\n";
    }
delete player;
}

// int attack(int d){
//     int damage;
//     damage = d;
//     return damage;
// }

// Generate random numbers
int randNum(int r1, int r2){
    std::mt19937 mtRandomEngine(time(NULL));
    // std::default_random_engine randomEngine(time(NULL));
    std::uniform_int_distribution<int> randomNum(r1, r2);
    int rnd = randomNum(mtRandomEngine);
    std::cout << "Roll: " << rnd << std::endl;
    return rnd;
}

// Generate random numbers
int randNum2(int r1, int r2){
    std::mt19937 mtRandomEngine(time(NULL)+36);
    // std::default_random_engine randomEngine(time(NULL));
    std::uniform_int_distribution<int> randomNum(r1, r2);
    int rnd = randomNum(mtRandomEngine);
    std::cout << "Roll2: " << rnd << std::endl;
    return rnd;
}