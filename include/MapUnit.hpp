#ifndef MAPUNIT_HPP
#define MAPUNIT_HPP

#include <iostream>
#include "Coord.hpp"

/* 
    0 = Player
    1 = Wall
    2 = Grass
    3 = Water
    4 = Stone
*/

using namespace std;

class MapUnit
{
protected:
    Coord *coord;
    int type;

public:
    MapUnit();
    MapUnit(Coord *coord, int type);
    ~MapUnit();

    Coord *getCoord();
    int getType();
    void getTypeStr();

    void setCoord(Coord *coord);
    void setType(int type);
};

#endif