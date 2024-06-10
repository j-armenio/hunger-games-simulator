#include "../include/MapUnit.hpp"

MapUnit::MapUnit() : coord(nullptr), type(-1) {};

MapUnit::MapUnit(Coord *coord, short int type) : coord(coord), type(type) {};

MapUnit::~MapUnit() {}

Coord* MapUnit::getCoord() { return coord; };

short int MapUnit::getType() { return type; };

void MapUnit::setCoord(Coord *coord) { this->coord = coord; };

void MapUnit::setType(short int type) { this->type = type; };