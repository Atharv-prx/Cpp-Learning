// .append(" ") Adds a string to another string

#include <iostream>
int main(){

    std::string name;

    std::cout << "What's your name \n";
    std::getline(std::cin, name);

    name.append("-prx");

    std::cout << "Your username is now " << name;

    return 0;
}