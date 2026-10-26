#ifndef MATRIX_H
#define MATRIX_H

typedef struct{
	int data[3][3];
} matrix;
matrix sum(matrix arr1, matrix arr2, int m, int n);
matrix sub(matrix arr1, matrix arr2, int m, int n);
matrix mul(matrix arr1, matrix arr2, int m1, int m2, int n1, int n2);
bool spe(matrix arr, int m, int n);
#endif
