// block of reusable code is called function

#include <iostream>

void happyBirthday(std::string name){ 
    std::cout << "Happy birthday to you " << name << '\n';
    std::cout << "Happy birthday dear " << name << '\n';
    std::cout << "Happy birthday to you " << name << '\n';
}

int main(){

    std::string name = "bro";

    happyBirthday(name); // When we inwoke a function we have to make that fuction aware of another variable
  
    return 0;
}