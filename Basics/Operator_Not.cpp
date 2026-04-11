// age >= 18 checks if age is greater than or equal to 18, !(age >= 18) reverses it

#include <iostream>
int main(){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(!(age >= 18)){ 
        std::cout << "You are NOT an adult\n";
    }
    else{
        std::cout << "You are an adult\n";
    }

    return 0;
}
