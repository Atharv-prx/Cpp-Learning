// Replacemnt for If-else statement

#include <iostream>
int main (){

    double a;

    std::cout << "What are your marks.\n";
    std::cin >> a;

    (a >= 75) ? (std::cout << "You pass!") : (std::cout << "You fail!");

    return 0;
}