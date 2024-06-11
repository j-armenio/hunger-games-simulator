
#include "../include/Player.hpp"
#include "../include/MapUnit.hpp"

using namespace std;

Player::Player(int x, int y, const string& name, int hunger, int thirst, int strength, int speed) : MapUnit()
{
    this->name = name;
    this->health = 100;
    this->stamina = 100;
    this->hunger = hunger;
    this->thirst = thirst;
    this->strength = strength;
    this->speed = speed;
}