#pragma once
#include "Window.h"
#include <string>

using namespace std;

class TitledWindow : public Window 
{
protected:
    string title;

public:
    TitledWindow();
    TitledWindow(int w, int h, int x, int y, const string& t);
    virtual ~TitledWindow();

    string getTitle() const { return title; }
    void setTitle(const string& t) { title = t; }

    virtual void display() const override;
};