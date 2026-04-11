//.substr(m,n) returns a substring of name starting from mth index and of length n

#include <iostream>
int main(){

    std::string name;

    std::cout << "What's your name \n";
    std::getline(std::cin, name);

    std::cout << name.substr(1,3); 

    return 0;
}