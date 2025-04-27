#include "Lab5Task.h"
#include "Pupil.h"
#include "Window.h"
#include "TitledWindow.h"
#include "ButtonWindow.h"
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