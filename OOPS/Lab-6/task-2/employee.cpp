#include "employee.h"
#include "date.h"
#include <cstring>
#include <iostream>

using namespace std;

Employee::Employee (const char *fn, const char *ln, int bd, int bm, int by, int jd, int jm, int jy):Birth_Date(bd, bm, by), Join_Date(jd, jm, jy){
	int length = strlen(fn);
	strncpy(fname, fn, length);
	fname[length] = '\0';
	length = strlen(ln);
	strncpy(lname, ln, length);
	lname[length]='\0';
	cout << "constructor for employee object" << fname << lname << endl;
}

	
void Employee::display() const{
	cout << lname << fname;
	Join_Date.display();
	Birth_Date.display();
	cout << endl;
}

Employee::~Employee(){
	cout << "destructor called for employee" << fname << lname << endl;
}

