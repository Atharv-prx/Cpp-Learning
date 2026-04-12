// :: --> scope resolution operator = forces function to use global variable
#include<iostream>

int num = 3; //global variable
void printnum();

int main(){

    int num = 2; // local variable
    printnum();
    std::cout << ::num << '\n';

    return 0;
}
void printnum(){
    int num = 1; //local variable
    std::cout << ::num << '\n';
}