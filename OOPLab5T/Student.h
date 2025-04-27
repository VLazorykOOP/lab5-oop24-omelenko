#pragma once
#include <string>
#include <iostream>

using namespace std;

class Student 
{
protected:
    string name;
    string studentId;
    float gpa;

public:
    Student();
    Student(const string& n, const string& id, float g);
    Student(const Student& other);
    virtual ~Student();

    Student& operator=(const Student& other);

    string getName() const { return name; }
    void setName(const string& n) { name = n; }
    string getStudentId() const { return studentId; }
    void setStudentId(const string& id) { studentId = id; }
    float getGpa() const { return gpa; }
    void setGpa(float g) { gpa = g; }

    friend ostream& operator<<(ostream& os, const Student& student);
    friend istream& operator>>(istream& is, Student& student);

    virtual void print(ostream& os) const;
};