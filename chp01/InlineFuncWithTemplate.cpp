#include <iostream>

template <typename T>
T square(T var);


int main(void) {

    std::cout << square(4) << std::endl;
    std::cout << square(1.2) << std::endl;
    
    return 0;
}

template <typename T>
inline T square(T var) {
    
    return var * var;
}