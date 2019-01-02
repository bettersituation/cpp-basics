#include "Rectangle.h"
#include <iostream>
using namespace std;


Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
    :upLeft(x1, y1), lowRight(x2, y2)
{
    //empty
}

void Rectangle::showInfo(){
    cout << "up left:" << upLeft.GetY() << "," << upLeft.GetX() <<endl;
    cout << "low right:" << lowRight.GetY() << "," << lowRight.GetX() <<endl;
}