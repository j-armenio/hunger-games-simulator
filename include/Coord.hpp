#ifndef COORD_HPP
#define COORD_HPP

class Coord
{
private:
    int x, y;

public:
    Coord();
    Coord(int x, int y);
    ~Coord();

    int getX();
    int getY();

    void setX(int x);
    void setY(int y);
};

#endif