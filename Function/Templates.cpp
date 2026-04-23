//It describes what a fuction looks like
//Can be used to generate as many overloaded functions each using different data types as we want 

#include <iostream>

template <typename T, typename U> //Decalration of what T and U are cuz complier doesn't know what they are
auto max(T a, U b) {
    return (a > b) ? a : b;
}

int main(){
    std::cout << max(10, 20.5) << '\n';
    return 0;
}
