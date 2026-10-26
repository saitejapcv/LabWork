#include "point.h"
#include <iostream>

using namespace std;

Point::Point(int x_, int y_){
	cout << "Cosntructor for point (" << x_ << ", " << y_ << ")" << endl;

	x = x_;
	y = y_;
}

void Point::display(){
	cout << "Point: (" << x << ", " << y << ")" << endl;
}

Point::~Point(){
	cout << "Cosntructor for point (" << x_ << ", " << y_ << ")" << endl;
}
