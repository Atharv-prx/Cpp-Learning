#include <iostream>
int main(){

    for(int i=0; i <= 10; i++){
        if(i==5){
            break;
        }
        std::cout << i << '\n';
    }
    return 0;
}