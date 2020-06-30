#include "person.h"

Person::Person( const std::string& forename, const std::string& surname, const Date& birthday, const std::string& birthplace )
	: _forename( forename ), _surname( surname ), _birthday( birthday ), _birthplace( birthplace )
{
}

std::string Person::forename() const
{
	return _forename;
}

void Person::forename( const std::string & forename )
{
	_forename = forename;
}

std::string Person::surname() const
{
	return _surname;
}

void Person::surname( const std::string & surname )
{
	_surname = surname;
}

Date Person::birthday() const
{
	return _birthday;
}

void Person::birthday( const Date & birthday )
{
	_birthday = birthday;
}

std::string Person::birthplace() const
{
	return _birthplace;
}

void Person::birthplace( const std::string & birthplace )
{
	_birthplace = birthplace;
}
