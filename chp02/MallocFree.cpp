#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char * MakeStrAdr(int len);

int main(void) {
    char str2[2] = "e";
    char *str = MakeStrAdr(20);
    strcpy(str, "34amsohappydeefwehgronmew234");
    cout << str << endl;
    cout << *str << endl;
    free(str);

    cout << str2 << endl;
    cout << *str2 << endl;
    return 0;
}

char * MakeStrAdr(int len) {
    char *str = (char *) malloc(sizeof(char) * len);
    return str;
    }