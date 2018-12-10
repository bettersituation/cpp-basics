#include <iostream>
using namespace std;

int & ReferenceReturn1(int &ref);
int ReferenceReturn2(int &ref);

int main(void) {
    int num1 = 10;
    int num2 = 10;
    cout << "num1: " << num1 << endl; 

    int num10 = ReferenceReturn1(num1);
    cout << "num1: " << num1 << endl; 

    int &num11 = ReferenceReturn1(num1);
    cout << "num1: " << num1 << endl; 
    
    int num22 = ReferenceReturn2(num2);

    num10--;
    num11++;

    cout << "num1: " << num1 << endl; 
    cout << "num10: " << num10 << endl;
    cout << "num11: " << num11 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num22: " << num22 << endl;

    return 0;
}

int & ReferenceReturn1(int &ref) {
    ref++;
    return ref;
}

int ReferenceReturn2(int &ref) {
    ref++;
    return ref;
}