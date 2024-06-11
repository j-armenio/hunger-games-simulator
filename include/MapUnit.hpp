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
    MapUnit(int x, int y, int type);
    ~MapUnit();

    Coord *getCoord();
    int getType();

    void setCoord(Coord *coord);
    void setType(int type);

protected:
    Coord *coord;
    int type;
};

#endif