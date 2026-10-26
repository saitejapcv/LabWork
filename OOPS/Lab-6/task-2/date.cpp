#include "date.h"
#include <iostream>

using namespace std;


Date::Date (int d, int m, int y){
	cout << "constructor for date object" << endl;
	if(m >= 0 && m <= 12)
		month = m;
	else
		month = 1;
	year = ((y > 1900 && y < 2075) ? y : 0);
	day = checkday(d);
}

int Date::checkday(int today){
	static const int daysofmonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(today>0 && today <= daysofmonth[month])
		return today;
	if(month == 2 && today == 29 && (year % 400 == 0) ||(year % 4 == 0 && year % 100 != 0))
		return today;
	cout << "Invalid Day Value" << endl;
	return 1;
}
Date::~Date(){
	cout << "Destructor for date Object" << endl;
}

void Date::display() const {
	cout << day << "-" << month << "-" << year<< endl;
}
