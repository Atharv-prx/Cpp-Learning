// a location in memory where data is stored is called an address
// a memory address can be accessed using the address-of operator (&)

#include <iostream>
int main(){

    int num = 5;
    std::cout << "The value of num is: " << num << '\n';
    std::cout << "The address of num is: " << &num << '\n';

    return 0;
}