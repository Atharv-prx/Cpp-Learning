/*
A programming technique where a function invokes intself from within 
We break a complex concept into repeatable single step 

(Iteration vs Recursion)

Advantages -Less code, Lot cleaner, Usefull for sorting    
Disadvantages -Uses more memory, Slower than iteration  
*/
#include <iostream>

void walk(int steps);

int main(){

    walk(5);

    return 0;
}

void walk(int steps){
    if(steps > 0){
        std::cout << "Walking " << steps << " steps\n";
        walk(steps-1);
    }
}