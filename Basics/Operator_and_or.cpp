#include <iostream>
int main(){

    double percentile;

    std::cout << "Enter your percentile\n";
    std::cin >> percentile;

    if (percentile < 0 || percentile > 100) { //checks if one condition is true
        std::cout << "Invalid input\n";
        return 0;
    }

    if(percentile >= 95 && percentile <= 100) { //checks if both conditions are true
            std::cout << "You are in top 5 percent\n";
        }

    else {
        if(percentile >=80 && percentile < 95){
            std::cout << "You are good enough\n";
        }
        else {
            std::cout << "It's not good enough";
        }  

    }

    return 0;
    }

    /* Better one
    #include <iostream>
int main(){

    double percentile;

    std::cout << "Enter your percentile\n";
    std::cin >> percentile;

    if(percentile < 0 || percentile > 100){
        std::cout << "Invalid percentile\n";
    }
    else if(percentile >= 95){
        std::cout << "You are in top 5 percent\n";
    }
    else if(percentile >= 80){
        std::cout << "You are good enough\n";
    }
    else{
        std::cout << "It's not good enough\n";
    }

    return 0;
}
*/