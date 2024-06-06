#ifndef COORD_H
#define COORD_H

class Coord
{
public:
    Coord(int x, int y);
    ~Coord();

    int getX();
    int getY();

    void setX(int x);
    void setY(int y);

private:
    int x, y;
};

#endif