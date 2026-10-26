#ifndef DATE_H
#define DATE_H

class Date{
	private:
		int month;
		int year;
		int day;
		int checkday(int);
	public:
		Date(int = 1, int = 1, int = 2003);
		void display() const;
		~Date();
};
#endif
