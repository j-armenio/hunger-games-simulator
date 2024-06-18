#include "../include/Coord.hpp"

Coord::Coord() : x(-1), y(-1) {};

Coord::Coord(int x, int y) : x(x), y(y) {};

Coord::~Coord() {}

int Coord::getX() { return x; };

int Coord::getY() { return y; };

void Coord::setX(int x) { this->x = x; };

void Coord::setY(int y) { this->y = y; };