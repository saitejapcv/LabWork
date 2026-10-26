#include <iostream>
#include <chrono>
#include <cstdlib>

using namespace std;

void bubble_sort(int n);

int main()
{
    int i;
    cout << "Enter the input size: "
    cin >> i
    bubble_sort(i);
    
}

void bubble_sort(int n)
{
    int array[10000];
    int swap = 0;
    int temp;
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100 + 1;
    }
    auto start = chrono::high_resolution_clock::now();
    for(int i = 0; i < n; i++){
        swap = 0;
        for(int j = i; j < n-1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j+1] = temp;
                swap = 1
            }
        }
        if(swap == 0)
            break;
    }
    auto end = chrono::high_resolution_clock::now();
    cout << "Time for input size " << i << " is " << chrono::duration<double>(end - start).count() << " seconds"<< endl;
}
