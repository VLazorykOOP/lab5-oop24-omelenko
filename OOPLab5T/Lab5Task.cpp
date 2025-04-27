#include "Lab5Task.h"
#include "Pupil.h"
#include "iostream"

using namespace std;

int task1()
{
    // Test 1: Create a Pupil using default constructor
    cout << "Test 1: Creating a Pupil with default constructor" << endl;
    Pupil pupil1;
    cout << "Pupil 1 details:" << endl;
    pupil1.print();
    cout << "Grade: " << pupil1.getGrade() << endl;
    cout << "-------------------" << endl;

    // Test 2: Create a Pupil using parameterized constructor
    cout << "Test 2: Creating a Pupil with parameterized constructor" << endl;
    Pupil pupil2("Alice", "Smith", "50kg", 10);
    cout << "Pupil 2 details:" << endl;
    pupil2.print();
    cout << "Grade: " << pupil2.getGrade() << endl;
    cout << "-------------------" << endl;

    // Test 3: Modify attributes using setters
    cout << "Test 3: Modifying Pupil 2 attributes" << endl;
    pupil2.setName("Bob");
    pupil2.setSurname("Johnson");
    pupil2.setWeigth("55kg");
    pupil2.setGrade(11);
    cout << "Pupil 2 modified details:" << endl;
    pupil2.print();
    cout << "Grade: " << pupil2.getGrade() << endl;
    cout << "-------------------" << endl;

    // Test 4: Create another Pupil to test object count
    cout << "Test 4: Creating another Pupil to test object count" << endl;
    Pupil pupil3("Charlie", "Brown", "60kg", 9);
    cout << "Pupil 3 details:" << endl;
    pupil3.print();
    cout << "Grade: " << pupil3.getGrade() << endl;
    cout << "-------------------" << endl;

    // Test 5: Destroy objects (happens automatically at end of scope)
    cout << "Test 5: Objects will be destroyed when exiting scope" << endl;

    return 2;
}