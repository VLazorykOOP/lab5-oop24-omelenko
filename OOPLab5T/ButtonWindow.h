#pragma once
#include "TitledWindow.h"
#include <string>

using namespace std;

class ButtonWindow : public TitledWindow 
{
private:
    string buttonLabel;

public:
    ButtonWindow();
    ButtonWindow(int w, int h, int x, int y, const string& t, const string& label);
    virtual ~ButtonWindow();

    string getButtonLabel() const { return buttonLabel; }
    void setButtonLabel(const string& label) { buttonLabel = label; }

    virtual void display() const override;
};