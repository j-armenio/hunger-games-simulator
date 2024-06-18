#include "../include/GameManager.hpp"

GameManager::GameManager() : turn (0), players (vector<Player>()) {};

GameManager::~GameManager() {};

void GameManager::getTurn()
{
    cout << "Turn " << turn << endl;
}

void GameManager::nextTurn()
{
    turn++;
}

void GameManager::addPlayer(Player player)
{
    players.push_back(player);
}