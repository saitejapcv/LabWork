#include "order.h"
#include <iostream>

using namespace std;

CreateAndDestroy::~CreateAndDestroy(){
	cout << "Object " << objectID << " Destructor Runs"<< endl;
}
