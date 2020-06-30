#include <iostream>
#include <memory>

#include "person.h"

using namespace std;

int main()
{
	auto person = make_unique<Person>( "Max", "Mustermann", Date(1, 2, 1976), "Musterstadt" );

	cout << "I am " << person->forename() << " " << person->surname() << " and I was born on " 
		<< person->birthday() << " in " << person->birthplace() << ".";
}
