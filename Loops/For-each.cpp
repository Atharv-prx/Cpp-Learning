// eases the transversal over a iterable datd set
// rather than doing what we did in Itteration.cpp we do this

#include <iostream>
int main (){

    std::string Flavours[] = {"Vanilla", "Chocolate","Strawberry","Mango"};

    for(std::string flavour : Flavours){
        std::cout << flavour << '\n';

    }

    return 0;
}