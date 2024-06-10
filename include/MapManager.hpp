#ifndef MAPMANAGER_H
#define MAPMANAGER_H

#include <iostream>
#include <vector>

#include "MapUnit.hpp"

using namespace std;

class MapManager
{
public:
    MapManager(vector<vector<MapUnit>> map, int numRows, int numCols);
    ~MapManager();

    int getNumRows();
    int getNumCols();
    Coord *getCoord(int x, int y);

    void printMap();
    void MapManagerTEST();

private:
    vector<vector<MapUnit>> map;
    int numRows;
    int numCols;
};

#endif