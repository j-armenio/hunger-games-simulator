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
    
    mm->printMap();

    delete mm;

    return 0;
}