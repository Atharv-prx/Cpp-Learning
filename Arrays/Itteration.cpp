// we do "sizeof(Flavours)/sizeof(std::string)" not "i<4" because it is ez to change code after if we add or remove more array elements

#include <iostream>
int main(){

    std::string Flavours[] = {"Vanilla", "Chocolate","Strawberry","Mango"}; 

    for(int i=0; i < sizeof(Flavours)/sizeof(std::string); i++){
        std::cout << Flavours[i] << '\n';
    }

    return 0;
}