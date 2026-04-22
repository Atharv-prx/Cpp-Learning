// Memory that is allocated after the program is already complied and running
// We use 'new' operator to allocate memory to heap rather than stack, and to deallocate it we use 'delete' operator

//Usefull when we don't know how much memory we will need.
//Makes our program more flexible especially when accepting user input

//It is a good practice if not expected to use delete operator when using new operator, to set the pointer to NULL after deleting it, to avoid dangling pointer issues

#include <iostream>
int main(){

    int *pNum = NULL;

    pNum = new int; // allocate memory to heap and assign the address to pNum 

    *pNum = 10; // assign value to the memory location pointed by pNum

    std::cout << "address: " << pNum;
    std::cout << "\nvalue: " << *pNum << '\n';

    delete pNum; // deallocate memory from heap 
    pNum = NULL; // set pointer to NULL to avoid dangling pointer

    return 0;
} 