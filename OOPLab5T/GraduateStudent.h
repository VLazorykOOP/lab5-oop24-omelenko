#pragma once
#include "Student.h"
#include <string>

using namespace std;

class GraduateStudent : public Student 
{
private:
    string thesisTitle;

public:
    GraduateStudent();
    GraduateStudent(const string& n, const string& id, float g, const string& thesis);
    GraduateStudent(const GraduateStudent& other);
    virtual ~GraduateStudent();


    GraduateStudent& operator=(const GraduateStudent& other);


    string getThesisTitle() const { return thesisTitle; }
    void setThesisTitle(const string& thesis) { thesisTitle = thesis; }


    friend ostream& operator<<(ostream& os, const GraduateStudent& gradStudent);
    friend istream& operator>>(istream& is, GraduateStudent& gradStudent);


    virtual void print(ostream& os) const override;
};