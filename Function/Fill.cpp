// fill the range of elements with a specified value
// fill (beginning address , ending address, value)

#include <iostream>
int main (){

    int size = 10;

    std::string Flavours[size];

    fill (Flavours , Flavours + (size/2) , "Chocolate");
    fill (Flavours + (size/2) , Flavours + size , "Vanilla");

    for (std::string Flavours : Flavours){
        std::cout << Flavours << '\n';
    }

    return 0;

}