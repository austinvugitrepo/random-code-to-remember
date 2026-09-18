#include <iostream>
#ifndef DATE_H
#define DATE_H

class Date {

	private:
		int month, day, year;

	public:
		Date();
		Date(int, int, int);
		void
		setDate(int, int, int);
		void
		addDays(int);
		void
		subtractDays(int);
		int
		getDay() const;
		int
		getMonth() const;
		int
		getYear() const;
		void
		printDate() const;

};

#endif
