# include <iostream>

int main(void) {
    char name[100];
    char lang[200];
    
    std::cout << "what's your name? ";
    std::cin >> name;
    
    std::cout << "what's your favorite? ";
    std::cin >> lang;
    
    std::cout << "my name is " << name << ". good." << std::endl;
    std::cout << "my favorite is" << lang << ". bset" << std::endl;

    return 0;
}