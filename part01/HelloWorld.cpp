/* header file declare <iostream> (.h is skip if it is standard)
 * std::cout << what you want print any type
 * << plays as join operation
 * << std::endl plays as linebreaker \n
 */

#include <iostream>

int main(void) {
    int num=20;
    std::cout << "Hello world" << std::endl;
    std::cout << "Hello " << "World!" << std::endl;
    std::cout << num << ' ' << 'A';
    std::cout << ' ' << 3.14 << std::endl;
    return 0;
}