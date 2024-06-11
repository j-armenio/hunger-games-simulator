#include "../include/MapUnit.hpp"

MapUnit::MapUnit() : coord(nullptr), type(-1) {};

MapUnit::MapUnit(int x, int y, int type) : coord(coord), type(type) 
{
    
};

MapUnit::~MapUnit() {}

Coord* MapUnit::getCoord() { return coord; };

int MapUnit::getType() { return type; };

void MapUnit::setCoord(Coord *coord) { this->coord = coord; };

void MapUnit::setType(int type) { this->type = type; };