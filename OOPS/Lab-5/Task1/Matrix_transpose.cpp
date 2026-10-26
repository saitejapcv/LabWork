#include "Matrix.h"

Matrix Matrix::transpose() {
    Matrix res(cols, rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            res.a[j][i] = a[i][j];
        }
    }
    return res;
}
