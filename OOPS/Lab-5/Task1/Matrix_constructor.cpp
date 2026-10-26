#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix() {
    rows = 2;
    cols = 2;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] = 0;
        }
    }
    cout << "Default constructor called for Matrix" << endl;
}

Matrix::Matrix(int r, int c) {
    rows = r;
    cols = c;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] = 0;
        }
    }
    cout << "Parameterized constructor called for Matrix (" << rows << "x" << cols << ")" << endl;
}

Matrix::~Matrix() {
    cout << "Destructor called for Matrix (" << rows << "x" << cols << ")" << endl;
}
