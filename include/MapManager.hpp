#ifndef MAP_MANAGER_HPP
#define MAP_MANAGER_HPP

#include <iostream>
#include <vector>

#include "MapUnit.hpp"

using namespace std;

class MapManager
{
private:
    vector<vector<MapUnit>> map;
    vector<vector<int>> mapMat;
    int numRows;
    int numCols;

public:
    MapManager(vector<vector<MapUnit>> map, vector<vector<int>> mapMat, int numRows, int numCols);
    ~MapManager();

    int getNumRows();
    int getNumCols();
    MapUnit *getUnit(int x, int y);

    void printMat();
    void printMap();
    
    void moveUnit(MapUnit *unit, int x, int y);

    void MapManagerTEST();
};

#endif