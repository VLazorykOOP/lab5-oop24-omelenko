#include "Human.h"
#include "iostream"

using namespace std;

int Human::objCount = 0;

Human::~Human()
{
	cout << "Destroyed human" << endl;
	objCount--;
}

Human::Human()
{
	Name = "John";
	Surname = "Doe";
	Weigth = "70kg";
	cout << "Created human" << endl;
	objCount++;
}

Human::Human(string name, string surname, string weigth)
{
	Name = name;
	Surname = surname;
	Weigth = weigth;
	cout << "Created human" << endl;
	objCount++;
}

void Human::print() const
{
	cout << "Name: " + Name << endl;
	cout << "Surname: " + Surname << endl;
	cout << "Weigth: " + Weigth << endl;
	cout << "Object count: " + to_string(objCount) << endl;
}