#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix Matrix::multiply(Matrix m) {
    if (cols != m.rows) {
        cout << "Matrices cannot be multiplied" << endl;
        return Matrix(0, 0);
    }
    Matrix res(rows, m.cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            res.a[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                res.a[i][j] += a[i][k] * m.a[k][j];
            }
        }
    }
    return res;
}
