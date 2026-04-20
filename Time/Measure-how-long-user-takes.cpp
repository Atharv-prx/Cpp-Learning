#include <iostream>
#include <chrono> // for time stuff

int main(){

    auto start = std::chrono::high_resolution_clock::now(); // time before input

    int answer;  

    std::cout << "What is square of 16\n";
    std::cout << "Enter answer: \n";
    std::cin >> answer;

    if(answer == 256){
        std::cout << "Correct answer!\n";
    }
    else{
        std::cout << "wrong answer!\n";
    }

    auto end = std::chrono::high_resolution_clock::now(); // time after inout 

    std::chrono::duration<double> elapsed = end - start; // to calculate time taken

    std::cout << "Time taken to answer: " << elapsed.count() << "seconds\n"; //seconds taken
    
    return 0;

}