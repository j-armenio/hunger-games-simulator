#include "../include/MapUnit.hpp"

MapUnit::MapUnit() : coord(nullptr), type(-1) {};

MapUnit::MapUnit(Coord *coord, MapUnitType type) : coord(coord), type(type) {};

MapUnit::~MapUnit() {}

Coord* MapUnit::getCoord() { return coord; };

MapUnitType MapUnit::getType() { return type; };

void MapUnit::setCoord(Coord *coord) { this->coord = coord; };

void MapUnit::setType(MapUnitType type) { this->type = type; };