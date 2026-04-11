//.find returns the position of first occurence of "something" in name, if not found returns -1

#include <iostream>
int main(){

    std::string name;

    std::cout << "What's your name \n";
    std::getline(std::cin, name);

    std::cout << name .find("prx");
    
    return 0;
}