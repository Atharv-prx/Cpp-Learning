//.empty() Checks wether user inputed string is empty or no

#include <iostream>
int main(){

    std::string name;

    std::cout << "What's your name \n";
    std::getline(std::cin, name);

    if(name.empty()) {
        std::cout << "You didnt't enter your name\n";
    }
    else {
        std::cout << "Hello " << name;
    }
    return 0;
}