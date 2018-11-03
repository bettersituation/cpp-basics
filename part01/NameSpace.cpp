/*
 * using namespace::func;
 * using namesapce namespace
 * 
 * No need to declare variable at header
 * using namespace alias as namespace AC = A::C;
 * Possible to hierachical namespace structure
*/


#include <iostream>
using std::cout;
using std::endl;


namespace A {
   
    namespace B {
    }
    
    namespace C {
        void Func(void);
    }
}


int main(void) {
    
    A::C::Func();
    
    namespace AC = A::C;
    AC::Func();
    
    return 0;
}


namespace A {
    char val[4]= "gg";
    
    namespace B {
        char val[2] = "B";
    }
    
    namespace C {
        char val[4] = "ef";
        void Func(void) {
            cout << val << endl;
            cout << A::val << endl;
            cout << A::B::val << endl;
        }
    }
}