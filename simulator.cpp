#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

enum class MapUnitType {
    Grass,
    Water,
    Stone,
    Wall,
    Player
};

class Coord {
    private:
        int x, y;

    public:
        Coord(int x, int y) : x(x), y(y) {};
        ~Coord() {};

        int getX() { return x; };
        int getY() { return y; };

        void setX(int x) { this->x = x; };
        void setY(int y) { this->y = y; };
};

class MapUnit {
    private:
        Coord *coord;
        short int type;

    public:
        MapUnit() : coord(nullptr), type(-1) {};
        MapUnit(Coord *coord, short int type) : coord(coord), type(type) {};
        ~MapUnit() { };

        Coord *getCoord() { return coord; };
        short int getType() { return type; };

        void setCoord(Coord *coord) { this->coord = coord; };
        void setType(short int type) { this->type = type; };
};

class MapManager {
    private:      

        vector<vector<MapUnit>> map;  
        int numRows;
        int numCols;

    public:
        MapManager(vector<vector<MapUnit>> map, int numRows, int numCols) : map(map), numRows(numRows), numCols(numCols) {};
        ~MapManager() {};

        void printMap() {
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                cout << map[i][j].getType() << " ";
            }
            cout << endl;
            }
        }   
};

void printMatrix(vector<vector<int>>& mat) {
    for (auto& row : mat) {
        for (int& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main()
{
    ifstream mapFile("map.txt");
    string line;
    int numRows, numCols;

    if (!mapFile) {
        cout << "Erro ao abrir o arquivo" << endl;
        return 1;
    }

    // Ler a primeira linha do arquivo e salvar o rows e cols em variaveis
    getline(mapFile, line);
    numRows = stoi(line.substr(0, line.find("x")));
    numCols = stoi(line.substr(line.find("x") + 1, line.length()));
    
    // Ler o arquivo e salvar os valores na matriz
    vector<vector<int>> mapMat(numRows, vector<int>(numCols));
    for (int i = 0; i < numRows; ++i) {
        if (getline(mapFile, line)) {
            istringstream iss(line);
            for (int j = 0; j < numCols; ++j) {
                if (!(iss >> mapMat[i][j])) {
                    std::cerr << "Erro ao ler o valor da matriz na linha " << i + 1 << std::endl;
                    return 1;
                }
            }
        } else {
            std::cerr << "Erro ao ler a linha " << i + 1 << std::endl;
            return 1;
        }
    }

    // Copiar os valores da matriz de inteiros para a matriz de mapUnit
    vector<vector<MapUnit>> mapUnitMat(numRows, vector<MapUnit>(numCols));
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            Coord *coord = new Coord(i, j);
            mapUnitMat[i][j] = MapUnit(coord, mapMat[i][j]);
        }
    }

    // Criar um objeto de Map e apontar seu map para a matriz de mapUnit
    MapManager *mapManager = new MapManager(mapUnitMat, numRows, numCols);

    mapManager->printMap();

    delete mapManager;

    return 0;
}