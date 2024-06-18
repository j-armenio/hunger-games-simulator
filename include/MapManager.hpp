#ifndef MAP_MANAGER_HPP
#define MAP_MANAGER_HPP

#include <iostream>
#include <vector>

#include "MapUnit.hpp"
#include "Player.hpp"

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
    MapUnit *getMapUnit(Coord *coord);

    void printMat();
    void printMap();
    
    void setPlayer(Player *player, Coord *coord);
    void movePlayer(Player *player, Coord *coord);

    void MapManagerTEST();
};

#endif