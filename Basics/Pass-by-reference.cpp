//We use & to pass the variable by reference. 
//This way we can swap the values of x and y in main function as well.

#include <iostream>

void swap(std::string &x , std::string &y){ 
    std::string temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){

    std::string x = "chu";
    std::string y = "pika";

    swap(x,y);

    std::cout << x << y ;
}