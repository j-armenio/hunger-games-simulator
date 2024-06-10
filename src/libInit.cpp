#include "../include/libInit.hpp"

MapManager *inputFileToMapManager(string inputFile) {
    ifstream mapFile(inputFile);
    string line;
    int numRows, numCols;

    if (!mapFile) {
        cout << "Erro ao abrir o arquivo" << endl;
        return NULL;
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
                    std::cout << "Erro ao ler o valor da matriz na linha " << i + 1 << std::endl;
                    return NULL;
                }
            }
        } else {
            std::cout << "Erro ao ler a linha " << i + 1 << std::endl;
            return NULL;
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
    MapManager *mapManager = new MapManager(mapUnitMat, mapMat, numRows, numCols);

    return mapManager;
}