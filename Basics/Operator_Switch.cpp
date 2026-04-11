//Like an if statement, the switch statement allows us to execute different code based on the value of a variable. The switch statement is often used as an alternative to a long series of if-else statements when we have a variable that can take on multiple discrete values.

#include <iostream>
int main(){

    int i;

    std::cout << "Enter month number (1-12)\n";
    std::cin >> i;

    switch(i){
        case 1:
        std::cout << "It is January";
        break;

        case 2:
        std::cout << "It is February";
        break;

        case 3:
        std::cout << "It is March";
        break;

        case 4:
        std::cout << "It is April";
        break;

        case 5:
        std::cout << "It is May";
        break;

        case 6:
        std::cout << "It is June";
        break;

        case 7:
        std::cout << "It is July";
        break;

        case 8:
        std::cout << "It is August";
        break;

        case 9:
        std::cout << "It is September";
        break;

        case 10:
        std::cout << "It is October";
        break;

        case 11:
        std::cout << "It is November";
        break;

        case 12:
        std::cout << "It is December";
        break;
        default:
        std::cout << "Please enter number from 1-12";
    }

    return 0;
}