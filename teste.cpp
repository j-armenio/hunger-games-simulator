#include <iostream>

using namespace std;

void troca(int *&x, int *&y) {
    int *temp = x;
    x = y;
    y = temp;
}

int main() 
{   
    int *x = new int(5);
    int *y = new int(10);

    cout << "x: " << *x << " y: " << *y << endl;

    troca(x, y);

    cout << "x: " << *x << " y: " << *y << endl;

    delete x;
    delete y;

    return 0;
}