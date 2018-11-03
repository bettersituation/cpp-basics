#include <iostream>
#include <string>
using namespace std;

void swap(int &a, int &b);
void swap(string &a, string &b);



int main(void) {

    int a = 1;
    int b = 2;
    swap(a, b);
    cout << "after change a: " << a <<", b: " << b << endl;
    
    string a2 = "a2";
    string b2 = "b2";
    swap(a2, b2);
    cout << "after change a2: " << a2 <<", b2: " << b2 << endl;
    
    return 0;
}

void swap(int &a, int &b) {
        
        int temp;
        temp = a;
        a = b;
        b = temp;
}

void swap(string &a, string &b) {
        
        string temp;
        temp = a;
        a = b;
        b = temp;
}