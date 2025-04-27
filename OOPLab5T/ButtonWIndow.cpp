#include "ButtonWindow.h"
#include <iostream>

using namespace std;

ButtonWindow::ButtonWindow() : TitledWindow(), buttonLabel("Click Me") 
{
    cout << "ButtonWindow created (default)" << endl;
}

ButtonWindow::ButtonWindow(int w, int h, int x, int y, const string& t, const string& label) : TitledWindow(w, h, x, y, t), buttonLabel(label) 
{
    cout << "ButtonWindow created (parameterized)" << endl;
}

ButtonWindow::~ButtonWindow() 
{
    cout << "ButtonWindow destroyed" << endl;
}

void ButtonWindow::display() const 
{
    TitledWindow::display();
    cout << "Button: " << buttonLabel << endl;
}