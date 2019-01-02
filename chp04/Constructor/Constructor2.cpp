#include <iostream>
using namespace std;

class SimpleClass {
    private:
        int num1;
        int num2;
    public:
        SimpleClass(int n1=0, int n2=0){
            num1 = n1;
            num2 = n2;
        }

        void ShowData() const{
            cout << num1 << ' ' << num2 << endl;
        }
};

SimpleClass sc1(){
    SimpleClass sc(10, 20);
    return sc;
}

int main(){
    SimpleClass sc0 = sc1();
    sc0.ShowData();

    SimpleClass sc2(100);
    sc2.ShowData();

    SimpleClass sc3(1, 2);
    sc3.ShowData();
    
    return 0;
}