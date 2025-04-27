#include "Window.h"
#include <iostream>

using namespace std;

Window::Window() : width(800), height(600), xPos(0), yPos(0) 
{
    cout << "Window created (default)" << endl;
}

Window::Window(int w, int h, int x, int y) : width(w), height(h), xPos(x), yPos(y) 
{
    cout << "Window created (parameterized)" << endl;
}

Window::~Window() 
{
    cout << "Window destroyed" << endl;
}

void Window::display() const 
{
    cout << "Window: " << width << "x" << height
        << " at position (" << xPos << ", " << yPos << ")" << endl;
}