#include <iostream>

template <typename T>
void bubble(T arr[], int n){
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
                if(swap == 0) break;
        }
        return;
}

int main(){
	int arr_int[5] = {21, 31, 12, 4, 23};
        char arr_char[5] = {'c', 'A', 'z', 'B', 'i'};
        float arr_float[5] = {0.04, 2.43, 9.3, 1.00, 5.32};

        bubble(arr_int, 5);
        bubble(arr_char, 5);
        bubble(arr_float, 5);

        for(int i = 0; i < 5; i++){
                printf("%d\t%c\t%f\n", arr_int[i], arr_char[i], arr_float[i]);
        }
}
