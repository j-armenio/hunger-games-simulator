#include <iostream>
#include <fstream>
#include <string>

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
};

class MapUnit {
    private:
        Coord *coord;
        short int type;

    public:
        MapUnit(Coord *coord, short int type) : coord(coord), type(type) {};
        ~MapUnit() {};

        Coord *getCoord() { return coord; };
        short int getType() { return type; };
};

class Map {
    private:
        int numRows;
        int numCols;
        short int **map;

    public:
        Map(short int **map, int numRowsCols) : map(map), numRows(numRows), numCols(numCols) {};
        ~Map() {};

        void printMap() {};
};

int main()
{
    ifstream file("map.txt");
    string line;

    // Ler a primeira linha do arquivo e salvar o rows e cols em variaveis
    // Criar uma matriz de inteiros com rows e cols
    // Ir lendo o arquivo linha por linha e salvando cada elemento em uma posição na matriz
    // Criar uma matriz de mapUnit de tamanho rows e cols
    // Copiar os valores da matriz de inteiros para a matriz de mapUnit, com o valor sendo o tipo e a posição sendo a coordenada
    // Criar um objeto de Map e apontar seu map para a matriz de mapUnit

    int rows, cols;
    short int **map;

    if (file.is_open()) {
        // Ler a primeira linha do arquivo e salvar o rows e cols em variaveis
        getline(file, line);
        rows = stoi(line.substr(0, line.find(" ")));
        cols = stoi(line.substr(line.find(" ") + 1, line.length()));

        // Criar uma matriz de inteiros com rows e cols
        map = new short int*[rows];
        for (int i = 0; i < rows; i++) {
            map[i] = new short int[cols];
        };

        // Ir lendo o arquivo linha por linha e salvando cada elemento em uma posição na matriz


    } else {
        cout << "Erro ao abrir o arquivo" << endl;
    }

    return 0;
}