#pragma once
#include <string>

using namespace std;

class Human
{
private:
	string Name;
	string Surname;
	string Weigth;
	static int objCount;
public:
	Human();
	Human(string name, string surname, string weigth);
	~Human();
	string getName() const { return Name; }
	void setName(string name) { Name = name; }
	string getSurname() const { return Surname; }
	void setSurname(string surname) { Surname = surname; }
	string getWeigth() const { return Weigth; }
	void setWeigth(string weigth) { Weigth = weigth; }
	void print() const;
	void objCountpp() { objCount++; }
	void objCountmm() { objCount--; }
};