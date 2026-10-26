#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix Matrix::subtract(Matrix m) {
    if (rows != m.rows || cols != m.cols) {
        cout << "Matrices cannot be subtracted" << endl;
        return Matrix(0, 0);
    }
    Matrix res(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            res.a[i][j] = a[i][j] - m.a[i][j];
        }
    }
    return res;
}
