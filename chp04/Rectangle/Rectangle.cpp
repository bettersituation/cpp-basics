#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr){
    if(ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()){
        cout <<"잘못된 위치정보" << endl;
        return false;
    }
    upLeft = ul;
    lowRight = lr;
    return true;
}

void Rectangle::showRecInfo() const {
    cout << "Up left (" << upLeft.GetX() << ", " << upLeft.GetY() << ")" << endl;
    cout << "Low right (" << lowRight.GetX() << ", " << lowRight.GetY() << ")" << endl;
}