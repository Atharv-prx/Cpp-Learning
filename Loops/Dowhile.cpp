/* This is like while, but it runs at least once no matter what.
   Do some block of code and then repeat if condition is true
*/

#include <iostream>
int main(){

    int n;

    do{
        std::cout << "Enter a positive number \n";
        std::cin >> n;
    } 
    while(n<0);

    std::cout << "The number is " << n;

    return 0;
}

/*   this can also be done by while loop but it more big 

#include <iostream>
int main(){

    int n;
    std::cout << "Enter a positive number \n";
    std::cin >> n;

    while(n<0){
    std::cout << "Enter a positive number \n";
    std::cin >> n;
    }

    std::cout << "The number is " << n;

    return 0;
}
*/