#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

#include "Coord.hpp"
#include "MapUnit.hpp"

using namespace std;

class Player : public MapUnit
{
private:
    MapUnit* unitBellow;
    string name;
    int health;
    int stamina;
    int hunger;
    int thirst;
    int strength;
    int speed;

public:
    Player(int x, int y, const string& name, int hunger, int thirst, int strength, int speed);
    ~Player();
};

#endif,