#ifndef PERSON_H
#define PERSON_H

#include <string>

#include "date.h"

class Person
{
private:
	std::string _forename;
	std::string _surname;
	Date _birthday;
	std::string _birthplace;

public:
	Person( const std::string& forename, const std::string& surname, const Date& birthday, const std::string& birthplace );

	std::string forename() const;
	void forename( const std::string &forename );

	std::string surname() const;
	void surname( const std::string &surname );

	Date birthday() const;
	void birthday( const Date &birthday );

	std::string birthplace() const;
	void birthplace( const std::string &birthplace );
};

 #endif // !PERSON_H
