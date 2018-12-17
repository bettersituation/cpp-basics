#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main(void){
    Point pos1;
    if(!pos1.InitMembers(-2, 4))
        cout << "fail" << endl;
    if(!pos1.InitMembers(2, 4))
        cout << "fail" << endl;

    Point pos2;
    if(!pos1.InitMembers(5, 9))
        cout << "fail" << endl;

    Rectangle rec;
    if(!rec.InitMembers(pos2, pos1))
        cout << "fail rec" << endl;
    if(!rec.InitMembers(pos1, pos2))
        cout << "fail rec" << endl;

    rec.showRecInfo();
    return 0;
}