#ifndef DATE_H
#define DATE_H

#include <ostream>

class Date
{
private:
	int _day;
	int _month;
	int _year;

public:
	Date( int day, int month, int year );

	int day() const;
	int month() const;
	int year() const;

	friend std::ostream& operator<< ( std::ostream &out, const Date &date );
};

#endif // !DATE_H