#ifndef MAPMANAGER_HPP
#define MAPMANAGER_HPP

#include <iostream>
#include <vector>

#include "MapUnit.hpp"

using namespace std;

class MapManager
{
public:
    MapManager(vector<vector<MapUnit>> map, vector<vector<int>> mapMat, int numRows, int numCols);
    ~MapManager();

    int getNumRows();
    int getNumCols();
    Coord *getCoord(int x, int y);

    void printMat();
    void printMap();
    void MapManagerTEST();

private:
    vector<vector<MapUnit>> map;
    vector<vector<int>> mapMat;
    int numRows;
    int numCols;
};

#endif