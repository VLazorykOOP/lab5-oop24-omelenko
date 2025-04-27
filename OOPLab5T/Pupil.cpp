#include "Pupil.h"
#include "iostream"

using namespace std;

Pupil::Pupil()
{
	cout << "Created pupil" << endl;
	objCountpp();
}

Pupil::Pupil(string name, string surname, string weigth, int grade) : Grade(grade)
{
	setName(name);
	setSurname(surname);
	setWeigth(weigth);
	cout << "Created pupil" << endl;
	objCountpp();
}

Pupil::~Pupil()
{
	cout << "Destroyed pupil" << endl;
	objCountmm();
}