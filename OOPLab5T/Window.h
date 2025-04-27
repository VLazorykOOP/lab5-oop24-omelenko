#pragma once
#include <string>

class Window 
{
protected:
    int width;
    int height;
    int xPos;
    int yPos;

public:
    Window();
    Window(int w, int h, int x, int y);
    virtual ~Window();

    int getWidth() const { return width; }
    void setWidth(int w) { width = w; }
    int getHeight() const { return height; }
    void setHeight(int h) { height = h; }
    int getXPos() const { return xPos; }
    void setXPos(int x) { xPos = x; }
    int getYPos() const { return yPos; }
    void setYPos(int y) { yPos = y; }

    virtual void display() const;
};