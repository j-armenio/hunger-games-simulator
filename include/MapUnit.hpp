#ifndef MAPUNIT_HPP
#define MAPUNIT_HPP

#include "Coord.hpp"

enum class MapUnitType 
{
    INVALID = -1,
    Player  = 0,
    Wall    = 1,
    Grass   = 2,
    Water   = 3,
    Stone   = 4
};

class MapUnit
{
public:
    MapUnit();
    MapUnit(Coord *coord, MapUnitType type);
    ~MapUnit();

    Coord *getCoord();
    MapUnitType getType();

    void setCoord(Coord *coord);
    void setType(MapUnitType type);

protected:
    Coord *coord;
    MapUnitType type;
};

#endif