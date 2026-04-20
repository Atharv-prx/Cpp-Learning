#include <iostream>

double getTotal(double price[] , int size){
    
    double total = 0;

    for (int i=0 ; i<size ; i++){
        total = total + price[i];
    }
    return total;
}


int main(){

    double price[] = { 10 , 20 , 30 , 40.5};
    int size = sizeof(price)/sizeof(price[0]);

    double total = getTotal(price , size); // Only need to pass array name not bracket

    std::cout << "total is: " << total;

    return 0;
}
/*
when we pass an array into a function it decays into pointer 
the getTotal fucntion does not know the size of array after array is passed to it 
so we mannually declare size of array to a function
*/ 