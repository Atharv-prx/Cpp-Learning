// .clear() Does what it says lol

#include <iostream>
int main(){

    std::string name;

    std::cout << "What's your name \n";
    std::getline(std::cin, name);

    name.clear();

    std::cout << "Hello " << name;

    return 0;
}