#include "fibonacci.h"

int fibonacci(int num){
	if(num == 1 || num == 0){
		return num;
	}
	return fibonacci(num-1) + fibonacci(num-2);
}

