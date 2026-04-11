// .at(n) returns the character at nth position

#include <iostream>
int main(){

    std::string name;

    std::cout << "What's your name \n";
    std::getline(std::cin, name);

    std::cout << name.at(1);

    return 0;
}