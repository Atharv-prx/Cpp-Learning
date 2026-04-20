//Skips the current iteration and continues the loop

#include <iostream>
int main(){

    for(int i=0; i <= 10; i++){
        if(i==5){
            continue;
        }
        std::cout << i << '\n';
    }
    return 0;
}