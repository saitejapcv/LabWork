#include "order.h"
#include <iostream>
using namespace std;

void create();

CreateAndDestroy first(1);

int main(){
	cout << "\n MAIN FUNCTION: EXECUTION BEGINS" << endl;
	CreateAndDestroy second(2);
	static CreateAndDestroy third(3);
	create(); // call function to create objects
	
	cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
	CreateAndDestroy fourth(4);
	cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;
}

void create() {
	cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
	CreateAndDestroy fifth(5);
	static CreateAndDestroy sixth(6);
	CreateAndDestroy seventh(7);
	cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;
}
