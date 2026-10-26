#include "Matrix.h"
#include <iostream>

using namespace std;

void Matrix::setElement(int r, int c, int val) {
    if (r >= 0 && r < rows && c >= 0 && c < cols) {
        a[r][c] = val;
    }
}

int Matrix::getElement(int r, int c) {
    return a[r][c];
}

void Matrix::display() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
