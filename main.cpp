#include <iostream>
#include <string>
#include "Entities.hpp"
static Player *player;

int main(){
    
    player = new Player();
    
    std::string tempVar;

    // Create and set player name.
    std::cout << "Enter your name: ";
    std::cin >> tempVar;
    std::cout << std::endl;
    player->setName(tempVar);
    std::cout << "Hello " << player->getName() << ", Welcome to this text-based game.\n";
    
    //Run game
    run();
    delete player;
    std::cin.ignore();
    return 0;
}