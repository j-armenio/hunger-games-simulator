#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

#include "../include/libUtils.hpp"

using namespace std;

int main()
{
    GameManager *gm = new GameManager();
    MapManager *mm = inputFileToMapManager("map.txt");

    // Criar um objeto Player
    // Inserir o Player no vetor players do gm
    // Atualizar o mm
    // Imprimir o mapa

    mm->printMap();

    delete mm;

    return 0;
}