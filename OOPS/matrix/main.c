#include "matrix.h"
#include <stdio.h>


void print(matrix arr, int m, int n);
int main(){
	matrix arr = {{
		{1, 2, 3},
		{1, 2, 3},
		{1, 2, 3}
	}};
	matrix res = sum(arr, arr, 3, 3);
	print(res, 3, 3);
	matrix res_sub = sub(arr, arr, 3, 3);
	print(res_sub, 3, 3);
	matrix res_mul = mul(arr, arr, 3, 3, 3, 3);
	print(res_mul, 3, 3);
	bool spe = spe(arr, 3, 3);
}

void print(matrix arr, int m, int n){
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			printf("%d ", arr.data[i][j]);
		}
		printf("\n");
	}
}
