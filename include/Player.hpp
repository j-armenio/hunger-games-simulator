#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

#include "Coord.hpp"
#include "MapUnit.hpp"

using namespace std;

class Player : public MapUnit
{
private:
    string name;
    MapUnit* unitBellow;

    int strength;
    int speed;

    int health;
    int stamina;
    int hunger;
    int thirst;

public:
    Player(const string& name);
    Player(const string& name, MapUnit *unitBellow, int strength, int speed);
    ~Player();

    string getName();
    MapUnit* getUnitBellow();
    int getStrength();
    int getSpeed();
    int getHealth();
    int getStamina();
    int getHunger();
    int getThirst();

    void setName(const string& name);
    void setUnitBellow(MapUnit *unitBellow);
    void setStrength(int strength);
    void setSpeed(int speed);
    void setHealth(int health);
    void setStamina(int stamina);
    void setHunger(int hunger);
    void setThirst(int thirst);
};

#endif