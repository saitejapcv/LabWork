#include "order.h"
#include <iostream>

using namespace std;

CreateAndDestroy::CreateAndDestroy(int id){
	objectID = id;
	cout << "Object " << objectID << " Constructor Runs"<< endl;
}


