#ifndef MAPUNIT_H
#define MAPUNIT_H

#include "Coord.hpp"

class MapUnit
{
public:
    MapUnit();
    MapUnit(Coord *coord, short int type);
    ~MapUnit();

    Coord *getCoord();
    short int getType();

    void setCoord(Coord *coord);
    void setType(short int type);

private:
    Coord *coord;
    short int type;
};

#endif