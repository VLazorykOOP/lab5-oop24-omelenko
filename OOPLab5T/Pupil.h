#pragma once
#include "Human.h"

class Pupil : public Human
{
private:
	int Grade;
public:
	Pupil();
	Pupil(string name, string surname, string weigth, int grade);
	~Pupil();
	void setGrade(int grade) { Grade = grade; }
	int getGrade() const { return Grade; }
};