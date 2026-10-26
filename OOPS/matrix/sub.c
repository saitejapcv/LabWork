#include "matrix.h"

matrix sub(matrix arr1, matrix arr2, int m, int n){
	matrix res;
	for(int i = 0; i<m; ++i){
		for(int j = 0; j < n; ++j){
			res.data[i][j] = arr1.data[i][j] - arr2.data[i][j];
		}
	}
	return res;
}

