#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() : name("Unknown"), studentId("000000"), gpa(0.0f) 
{
   cout << "Student created (default)" <<endl;
}

Student::Student(const string& n, const string& id, float g) : name(n), studentId(id), gpa(g) 
{
   cout << "Student created (parameterized)" <<endl;
}

Student::Student(const Student& other) : name(other.name), studentId(other.studentId), gpa(other.gpa) 
{
   cout << "Student copy constructor called" <<endl;
}

Student::~Student() 
{
   cout << "Student destroyed" <<endl;
}

Student& Student::operator=(const Student& other) 
{
    if (this != &other) 
    {
        name = other.name;
        studentId = other.studentId;
        gpa = other.gpa;
        cout << "Student assignment operator called" <<endl;
    }
    return *this;
}

void Student::print(std::ostream& os) const 
{
    os << "Name: " << name << "\nStudent ID: " << studentId << "\nGPA: " << gpa;
}

std::ostream& operator<<(std::ostream& os, const Student& student) 
{
    student.print(os);
    return os;
}

std::istream& operator>>(std::istream& is, Student& student) 
{
    cout << "Enter name: ";
    getline(is, student.name);
    cout << "Enter student ID: ";
    getline(is, student.studentId);
    cout << "Enter GPA: ";
    is >> student.gpa;
    is.ignore();
    return is;
}