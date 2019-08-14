#include <iostream>
#include <string>

#include "Entities.hpp"

Player::Player(){
    name = "UnNamed";
    level = 1;
    exp = 0;
    health = 100;
    maxHealth = 100;
    strength = 1;  
    damage = 3;
}

Player::Player(std::string n, int l, int e, int h, int mh, int s){
    name = n;
    level = l;
    exp = e;
    health = h;
    maxHealth = mh;
    strength = s; 
}

    // Get values
    std::string Player::getName(){ return name;     }
    int Player::getLevel()       { return level;    }
    int Player::getExp()         { return exp;      }
    int Player::getHealth()      { return health;   }
    int Player::getMaxHealth()   { return maxHealth;}
    int Player::getStrength()    { return strength; }
    int Player::getDamage()      { return damage; }

    // Set values
    void Player::setValues(std::string n, int e, int h, int mh, int s) {
        name = n; 
        exp = e;
        health = h; 
        maxHealth = mh;
        strength = s;
    }
    void Player::setName(std::string n){ name = n;      }
    void Player::setLevel(int l)       { level = l;     }
    void Player::setExp(int e)         { exp = e;       }
    void Player::setHealth(int h)      { health = h;    }
    void Player::setMaxHealth(int mh)  { maxHealth = mh;}
    void Player::setStrength(int s)    { strength = s;  }
    void Player::setDamage(int d)      { damage = d;    }