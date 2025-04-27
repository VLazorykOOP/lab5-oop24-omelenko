#include "Pupil.h"
#include "iostream"

using namespace std;

Pupil::Pupil()
{
	cout << "Created pupil" << endl;
	objCountpp();
}

Pupil::Pupil(string name, string surname, string weigth, int grade)
{
	setName(name);
	setSurname(surname);
	setWeigth(weigth);
	Grade = grade;
	cout << "Created pupil" << endl;
	objCountpp();
}

Pupil::~Pupil()
{
	cout << "Destroyed pupil" << endl;
	objCountmm();
}