#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "date.h"
class Employee{
	private :
		char fname[25];
		char lname[25];
		const Date Birth_Date;
		const Date Join_Date;
	public:
		Employee(const char *, const char *, int, int, int, int, int, int);
		void display() const;
		~Employee();
};
#endif
