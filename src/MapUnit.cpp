#include "../include/MapUnit.hpp"

MapUnit::MapUnit() : coord(nullptr), type(-1) {};

MapUnit::MapUnit(Coord *coord, int type) : coord(coord), type(type) {};

MapUnit::~MapUnit() {}

Coord* MapUnit::getCoord() { return coord; };

int MapUnit::getType() { return type; };

void MapUnit::getTypeStr() 
{
    switch (type) {
        case 0:
            cout << "Player";
            break;
        case 1:
            cout << "Wall";
            break;
        case 2:
            cout << "Grass";
            break;
        case 3:
            cout << "Water";
            break;
        case 4:
            cout << "Stone";
            break;
        default:
            cout << "Invalid";
            break;
    }
};

void MapUnit::setCoord(Coord *coord) { this->coord = coord; };

void MapUnit::setType(int type) { this->type = type; };