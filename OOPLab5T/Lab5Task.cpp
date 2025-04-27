#include "Lab5Task.h"
#include "Pupil.h"
#include "Window.h"
#include "TitledWindow.h"
#include "ButtonWindow.h"
#include "Student.h"
#include "GraduateStudent.h"
#include "iostream"

using namespace std;

int task1()
{

    cout << "Test 1: Creating a Pupil with default constructor" << endl;
    Pupil pupil1;
    cout << "Pupil 1 details:" << endl;
    pupil1.print();
    cout << "Grade: " << pupil1.getGrade() << endl;
    cout << "-------------------" << endl;


    cout << "Test 2: Creating a Pupil with parameterized constructor" << endl;
    Pupil pupil2("Alice", "Smith", "50kg", 10);
    cout << "Pupil 2 details:" << endl;
    pupil2.print();
    cout << "Grade: " << pupil2.getGrade() << endl;
    cout << "-------------------" << endl;


    cout << "Test 3: Modifying Pupil 2 attributes" << endl;
    pupil2.setName("Bob");
    pupil2.setSurname("Johnson");
    pupil2.setWeigth("55kg");
    pupil2.setGrade(11);
    cout << "Pupil 2 modified details:" << endl;
    pupil2.print();
    cout << "Grade: " << pupil2.getGrade() << endl;
    cout << "-------------------" << endl;


    cout << "Test 4: Creating another Pupil to test object count" << endl;
    Pupil pupil3("Charlie", "Brown", "60kg", 9);
    cout << "Pupil 3 details:" << endl;
    pupil3.print();
    cout << "Grade: " << pupil3.getGrade() << endl;
    cout << "-------------------" << endl;


    cout << "Test 5: Objects will be destroyed when exiting scope" << endl;

    return 2;
}

int task2()
{
    cout << "Test 1: Basic Window" << endl;
    Window win1(1024, 768, 100, 100);
    win1.display();
    cout << "-------------------" << endl;


    cout << "Test 2: Titled Window" << endl;
    TitledWindow titledWin(800, 600, 200, 200, "My Application");
    titledWin.display();
    cout << "-------------------" << endl;


    cout << "Test 3: Button Window" << endl;
    ButtonWindow buttonWin(1280, 720, 300, 300, "Settings", "OK");
    buttonWin.display();
    cout << "-------------------" << endl;


    cout << "Test 4: Modify ButtonWindow attributes" << endl;
    buttonWin.setWidth(1440);
    buttonWin.setHeight(900);
    buttonWin.setTitle("Updated Settings");
    buttonWin.setButtonLabel("Confirm");
    buttonWin.display();
    cout << "-------------------" << endl;


    cout << "Test 5: Polymorphic display" << endl;
    Window* winPtr = new ButtonWindow(640, 480, 50, 50, "Polymorphic Test", "Submit");
    winPtr->display();
    delete winPtr;
    cout << "-------------------" << endl;

    return 3;
}

int task3()
{
    cout << "Test 1: Creating and displaying a Student" << endl;
    Student s1("John Doe", "123456", 3.5f);
    cout << s1 << endl;
    cout << "-------------------" << endl;

    cout << "Test 2: Creating and displaying a GraduateStudent" << endl;
    GraduateStudent gs1("Jane Smith", "789012", 3.8f, "AI in Robotics");
    cout << gs1 << endl;
    cout << "-------------------" << endl;

    cout << "Test 3: Copy constructor for Student" << endl;
    Student s2(s1);
    cout << s2 << endl;
    cout << "-------------------" << endl;

    cout << "Test 4: Copy constructor for GraduateStudent" << endl;
    GraduateStudent gs2(gs1);
    cout << gs2 << endl;
    cout << "-------------------" << endl;

    cout << "Test 5: Assignment operator for Student" << endl;
    Student s3;
    s3 = s1;
    cout << s3 << endl;
    cout << "-------------------" << endl;

    cout << "Test 6: Assignment operator for GraduateStudent" << endl;
    GraduateStudent gs3;
    gs3 = gs1;
    cout << gs3 << endl;
    cout << "-------------------" << endl;

    cout << "Test 7: Stream input for Student" << endl;
    Student s4;
    cin >> s4;
    cout << s4 << endl;
    cout << "-------------------" << endl;

    cout << "Test 8: Stream input for GraduateStudent" << endl;
    GraduateStudent gs4;
    cin >> gs4;
    cout << gs4 << endl;
    cout << "-------------------" << endl;

    cout << "Test 9: Polymorphic behavior" << endl;
    Student* studentPtr = new GraduateStudent("Alice Brown", "345678", 3.9f, "Quantum Computing");
    cout << *studentPtr << endl;
    delete studentPtr;
    cout << "-------------------" << endl;

    return 0;
}