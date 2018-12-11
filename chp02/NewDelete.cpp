#include <iostream>
#include <string.h>
using namespace std;

char * MakeStrAdr(int len);
int * MakeInt();

int main(void) {
    char *str = MakeStrAdr(20);
    int *num = MakeInt();
    int &ref = *num;
    ref = 10;

    strcpy(str, "I am so it!");
    cout << str << endl;
    cout << num << endl;
    cout << ref << endl;
    cout << *num << endl;

    delete []str;
    delete num;
    return 0;
}

char * MakeStrAdr(int len) {
    char *str = new char[len];
    return str;
}

int * MakeInt(void) {
    int *num = new int;
    return num;
}
