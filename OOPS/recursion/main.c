#include <stdio.h>

int a = 0;
int main()
{
	printf("Welcome To %d\n", a);
	a++;
	if(a < 3)
	{
		printf("OOPS 2026%d\n", main());
		return a;
	}
}
