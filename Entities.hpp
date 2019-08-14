#pragma once
#include <string>
#include <iostream>

void run();
void encounter();
int attack(int l, int s);
int randNum(int r1, int r2);
int randNum2(int r1, int r2);

class Player {
private:
    std::string name;
    int level;
    int exp;
    int health;
    int maxHealth;
    int strength;
public:
    // Constructor
    Player();
    Player(std::string n, int l, int e, int h, int mh, int s);

    // Get values
    std::string getName(){ return name;     }
    int getLevel()       { return level;    }
    int getExp()         { return exp;      }
    int getHealth()      { return health;   }
    int getMaxHealth()   { return maxHealth;}
    int getStrength()    { return strength; }

    // Set values
    void setName(std::string n){ name = n;      }
    void setLevel(int l)       { level = l;     }
    void setExp(int e)         { exp = e;       }
    void setHealth(int h)      { health = h;    }
    void setMaxHealth(int mh)  { maxHealth = mh;}
    void setStrength(int s)    { strength = s;  }
};