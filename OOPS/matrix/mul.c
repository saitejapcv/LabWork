#include "matrix.h"

matrix mul(matrix arr1, matrix arr2, int m1, int m2, int n1, int n2){
	matrix res;
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j)
		{
			res.data[i][j] = 0;
		}
	}
	for(int i = 0; i < m1; ++i){
		for(int j = 0; j < n2; ++j){
			for(int k = 0; k < n1; ++k){
				res.data[i][j] += arr1.data[i][k]*arr2.data[k][j];
			}
		}
	}
	return res;
}
