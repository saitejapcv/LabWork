#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class Circle{
	private:
		const Point center;
		const Point on_circle;
		const radius;
		const area;
		const volume;
	public:
		Circle(int, int, int, int);
		void find_radius;
		void find_area;
		void find_volume;
		void display() const;	
		~Circle();
};
#endif
