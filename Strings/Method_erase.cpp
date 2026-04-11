//.erase(n,m) erases m characters from nth position

#include <iostream>
int main(){

    std::string name;

    std::cout << "What's your name \n";
    std::getline(std::cin, name);

    name.erase(1,3); 
    
    std::cout << name;

    return 0;
}