// .insert(n,"something") inserts "something" at nth position

#include <iostream>
int main(){

    std::string name;

    std::cout << "What's your name \n";
    std::getline(std::cin, name);

    name.insert(1,"|");

    std::cout << name;

    return 0;
}