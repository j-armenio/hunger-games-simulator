#include <iostream>
#include <vector>

#include "utils.h"

using namespace std;

void printMatrix(vector<vector<int>>& mat) {
    for (auto& row : mat) {
        for (int& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

void printDivisor() {
    cout << "--------------------------------" << endl;
}