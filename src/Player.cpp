#include "../include/Player.hpp"
#include "../include/MapUnit.hpp"

using namespace std;

// Geração de Player generico
Player::Player(const string& name)
    : name(name), unitBellow(nullptr), strength(10), speed(10), health(100), stamina(100), hunger(0), thirst(0)
{
    this->setType(0);
};

// Geração de Player com atributos
Player::Player(const string& name, MapUnit *unitBellow, int strength, int speed)
    : name(name), unitBellow(unitBellow), strength(strength), speed(speed), health(100), stamina(100), hunger(0), thirst(0)
{
    this->setType(0);
};

Player::~Player() {};

string Player::getName() { return name; };

MapUnit* Player::getUnitBellow() { return unitBellow; };

int Player::getStrength() { return strength; };

int Player::getSpeed() { return speed; };

int Player::getHealth() { return health; };

int Player::getStamina() { return stamina; };

int Player::getHunger() { return hunger; };

int Player::getThirst() { return thirst; };

void Player::setName(const string& name) { this->name = name; };

void Player::setUnitBellow(MapUnit *unitBellow) { this->unitBellow = unitBellow; };

void Player::setStrength(int strength) { this->strength = strength; };

void Player::setSpeed(int speed) { this->speed = speed; };

void Player::setHealth(int health) { this->health = health; };

void Player::setStamina(int stamina) { this->stamina = stamina; };

void Player::setHunger(int hunger) { this->hunger = hunger; };

void Player::setThirst(int thirst) { this->thirst = thirst; };

