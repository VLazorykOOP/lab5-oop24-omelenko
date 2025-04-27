#include "GraduateStudent.h"
#include <iostream>

using namespace std;

GraduateStudent::GraduateStudent() : Student(), thesisTitle("Untitled") 
{
    cout << "GraduateStudent created (default)" << endl;
}

GraduateStudent::GraduateStudent(const string& n, const string& id, float g, const string& thesis) : Student(n, id, g), thesisTitle(thesis) 
{
    cout << "GraduateStudent created (parameterized)" << endl;
}

GraduateStudent::GraduateStudent(const GraduateStudent& other) : Student(other), thesisTitle(other.thesisTitle) 
{
    cout << "GraduateStudent copy constructor called" << endl;
}

GraduateStudent::~GraduateStudent() 
{
    cout << "GraduateStudent destroyed" << endl;
}

GraduateStudent& GraduateStudent::operator=(const GraduateStudent& other) 
{
    if (this != &other) 
    {
        Student::operator=(other);
        thesisTitle = other.thesisTitle;
        cout << "GraduateStudent assignment operator called" << endl;
    }
    return *this;
}

void GraduateStudent::print(ostream& os) const 
{
    Student::print(os);
    os << "\nThesis Title: " << thesisTitle;
}

ostream& operator<<(ostream& os, const GraduateStudent& gradStudent) 
{
    gradStudent.print(os);
    return os;
}

istream& operator>>(istream& is, GraduateStudent& gradStudent) 
{
    is >> static_cast<Student&>(gradStudent);
    cout << "Enter thesis title: ";
    getline(is, gradStudent.thesisTitle);
    return is;
}