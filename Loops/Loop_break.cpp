//Breaks the loop at given point, so no further iterations

#include <iostream>
int main(){

    for(int i=0; i <= 11; i++){
        if(i==5){
            break;
        }
        std::cout << i << '\n';
    }
    return 0;
}