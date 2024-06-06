#include "MapManager.hpp"

MapManager::MapManager(vector<vector<MapUnit>> map, int numRows, int numCols) : map(map), numRows(numRows), numCols(numCols) {};

MapManager:: ~MapManager() { 
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            delete map[i][j].getCoord();
        }
    }
};

int MapManager::getNumRows() { return numRows; };

int MapManager::getNumCols() { return numCols; };

Coord *MapManager::getCoord(int x, int y) { return map[x][y].getCoord(); };

void MapManager::printMap() {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << map[i][j].getType() << " ";
        }
        cout << endl;
    }
}

void MapManager::MapManagerTEST() { }