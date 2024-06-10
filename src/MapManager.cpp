#include "../include/MapManager.hpp"

MapManager::MapManager(vector<vector<MapUnit>> map, vector<vector<int>> mapMat, int numRows, int numCols)
    : map(map), mapMat(mapMat), numRows(numRows), numCols(numCols) {};

MapManager:: ~MapManager() 
{ 
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            delete map[i][j].getCoord();
        }
    }
};

int MapManager::getNumRows() { return numRows; };

int MapManager::getNumCols() { return numCols; };

Coord *MapManager::getCoord(int x, int y) { return map[x][y].getCoord(); };

void MapManager::printMat() 
{
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << mapMat[i][j] << " ";
        }
        cout << endl;
    }
}

void MapManager::printMap() 
{
    cout << endl;

    short int type;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            type = map[i][j].getType();
            switch (type) {
                case 0: // Jogador
                    cout << "🟣";
                    break;
                case 1: // Parede
                    cout << "🔳";
                    break;
                case 2: // Grama
                    cout << "🟩";
                    break;
                case 3: // Agua
                    cout << "🟦";
                    break;
                case 4: // Preda
                    cout << "⬛";
                    break;
            }
        }
        cout << endl;
    }
    cout << endl;
}

void MapManager::MapManagerTEST() { }