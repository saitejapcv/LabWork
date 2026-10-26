#include <stdio.h>

int main(){
	int *aptr;
	int b = 10;
	const int c = 15;
	int d;
	aptr = &b;
	const int* aptr2;
	aptr2 = &b;
	// *aptr2 = 20 is not allowed
	int * const aptr3 = &b;

	// Now changing aptr3 = &d or other thing is not possible
	*aptr3 = 20; // this is allowed
	const int * const aptr4 = &b;
	// here both operations are not allowed
}
