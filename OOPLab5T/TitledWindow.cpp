#include "TitledWindow.h"
#include <iostream>

using namespace std;

TitledWindow::TitledWindow() : Window(), title("Untitled") 
{
    cout << "TitledWindow created (default)" << endl;
}

TitledWindow::TitledWindow(int w, int h, int x, int y, const string& t) : Window(w, h, x, y), title(t) 
{
    cout << "TitledWindow created (parameterized)" << endl;
}

TitledWindow::~TitledWindow() 
{
    cout << "TitledWindow destroyed" << endl;
}

void TitledWindow::display() const 
{
    Window::display();
    cout << "Title: " << title << endl;
}