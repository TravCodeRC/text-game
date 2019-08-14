#pragma once
#include <string>
#include <iostream>

void run();
void encounter();
// int attack(int d);
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
    int damage;
public:
    // Constructor
    Player();
    Player(std::string n, int l, int e, int h, int mh, int s);

    // Get values
    std::string getName();
    int getLevel();
    int getExp();
    int getHealth();
    int getMaxHealth();
    int getStrength();
    int getDamage();

    // Set values
    void setValues(std::string n, int e, int h, int mh, int s);
    void setName(std::string n);
    void setLevel(int l);
    void setExp(int e);
    void setHealth(int h);
    void setMaxHealth(int mh);
    void setStrength(int s);
    void setDamage(int d);
};