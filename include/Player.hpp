#ifndef PLAYER_HPP
#define PLAYER_HPP


#include "Coord.hpp"
#include "MapUnit.hpp"
#include "MapUnitType.hpp"

class Player : public MapUnit
{
public:
    Player() : MapUnit(coord, 0) {}

private:
    MapUnitType unitBellow;

    int health;
    int stamina;
    int hunger;
    int thirst;
    int strength;
    int speed;
};

#endif