#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
private:
    int rows;
    int cols;
    int a[10][10];

public:
    Matrix();
    Matrix(int r, int c);
    ~Matrix();

    void setElement(int r, int c, int val);
    int getElement(int r, int c);

    Matrix add(Matrix m);
    Matrix subtract(Matrix m);
    Matrix multiply(Matrix m);
    Matrix transpose();
    void display();
};

#endif
