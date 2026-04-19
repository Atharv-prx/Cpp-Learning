// determines the size of a data type or variable in bytes
#include <iostream>
int main(){

    std::string name = "Yash";
    double num = 3.14;
    bool isTrue = true;
    char letter[] = {'Y', 'A', 'S', 'H', '\0'}; // null character to indicate end of string

    std::cout << "Size of name is: " << sizeof(name) << " bytes\n";
    std::cout << "Size of number is: " << sizeof(num) << " bytes\n";
    std::cout << "Size of boolean is: " << sizeof(isTrue) << " bytes\n";
    std::cout << "Size of character array is: " << sizeof(letter) << " bytes\n";

    return 0;
}