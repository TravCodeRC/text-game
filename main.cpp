#include <iostream>
#include <string>
#include "Entities.hpp"

int main(){
    // Create variables
    Player player;
    std::string tempVar;

    // Create and set player name.
    std::cout << "Enter your name: ";
    std::cin >> tempVar;
    std::cout << std::endl;
    player.setName(tempVar);
    std::cout << "Hello " << player.getName() << ", Welcome to this text-based game.\n";
    
    //Run game
    run();


    std::cin.ignore();
    return 0;
}