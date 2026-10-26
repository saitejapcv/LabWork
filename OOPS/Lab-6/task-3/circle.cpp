#include "circle.h"
#include "iostream"

using namespace std;

Circle::Circle(int x1, int y1, int x2, int y2):Center(x1, y1), on_circle(x2, y2){
	find_radius();
	find_area();
	find_volume();
	
