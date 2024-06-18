#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

#include "../include/libUtils.hpp"

using namespace std;

int main()
{
    MapManager *mm = inputFileToMapManager("map.txt");
    Coord *coordAux = new Coord(2, 2);

    // Criar um objeto Player
    Player *player = new Player("p1");

    // Colocar o player no mapa
    mm->setPlayer(player, coordAux);

    // Imprimir o mapa
    mm->printMap();

    // Mover o player

    delete coordAux;
    delete player;
    delete mm;

    return 0;
}