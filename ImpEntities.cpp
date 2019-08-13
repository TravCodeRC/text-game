#include <iostream>
#include <string>

#include "Entities.hpp"

Player::Player(){
    name = "UnNamed";
    level = 1;
    exp = 0;
    health = 100;
    strength = 1;    
}

Player::Player(std::string n, int l, int e, int h, int s){
    name = n;
    level = l;
    exp = e;
    health = h;
    strength = s; 
}