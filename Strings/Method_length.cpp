// .lenght method returns length of string

#include <iostream>
int main (){

    std::string name;

    std::cout << "What's your name \n";
    std::getline(std::cin, name);

    if(name.length() >= 15){
        std::cout << "Your name is too long\n";
    }
    else {
        std::cout << "Welcome " << name ;
    }

    return 0;
}