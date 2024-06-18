#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <iostream>
#include <vector>

#include "Player.hpp"

using namespace std;

class GameManager
{
private:
    int turn;

    vector<Player> players;

public:
    GameManager();
    ~GameManager();

    void getTurn();
    void nextTurn();

    void addPlayer(Player player);
};

#endif