// NULL value = A special value that means something has no value
//              When a pointer is holding Null value, that pointer is not pointing at anything

// nullptr = A keyword that represents a null pointer value. 
//           These are helpfull when determining if an address was successfully assigned to a pointer

#include <iostream>
int main(){

    int *ptr = nullptr; // ptr is a null pointer
    int x = 10;

    ptr = &x; // now ptr is pointing to x

    if(ptr == nullptr){     // checking if ptr is a null pointer
        std::cout << "ptr is a null pointer, address was not assigned\n";
    }
    else{
        std::cout << "ptr is not a null pointer, address was assigned\n";
        std::cout << ptr << '\n';      // memory address of x
        std::cout << *ptr << '\n';     // value of x
    }
    return 0;
}