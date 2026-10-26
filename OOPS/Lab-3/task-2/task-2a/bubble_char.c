#include "fun.h"

void bubble_char(char arr[], int n){
	int swap = 0, temp;
	for(int i = 0; i < n; i++){
		swap = 0;
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swap = 1;
			}
		}
		if(swap == 0)
			break;
		 
	}
	return;
}
