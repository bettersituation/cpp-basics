#include <iostream>
using namespace std;

int main(void) {
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr;

    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout << "num" << endl;
    cout << num << endl;
    cout << &num << endl;

    cout << "ref" << endl;
    cout << ref << endl;
    cout << &ref << endl;

    cout << "ptr" << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;

    cout << "dptr" << endl;
    cout << dptr << endl;
    cout << &dptr << endl;
    cout << *dptr << endl;
    cout << **dptr << endl;

    return 0;
}