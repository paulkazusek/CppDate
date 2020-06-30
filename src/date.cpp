#include <iomanip> 
#include <iostream> 

#include "date.h"

Date::Date( int day, int month, int year ) 
	: _day(day), _month(month), _year(year)
{
}

int Date::day() const
{
	return _day;
}

int Date::month() const
{
	return _month;
}

int Date::year() const
{
	return _year;
}

std::ostream & operator<<( std::ostream & out, const Date & date )
{
	return out << date.day() << "." << date.month() << "." << date.year();
}
