#include <iostream>

int Volume(int length, int width = 2, int height = 3);

int main(void) {
    
    std::cout << "[3, 3, 3] -> " << Volume(3, 3, 3) << std::endl;
    std::cout << "[5, 2] -> " << Volume(5, 2) << std::endl;
    std::cout << "[3] -> " << Volume(3) << std::endl;
    
    return 0;
}

int Volume(int length, int width, int height) {
    return length * width * height;
}