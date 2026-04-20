#include <iostream>

int searchArray(int numbers[] , int size , int num){
    for(int i=0 ; i < size ; i++){
        if(numbers[i] == num){
            return i;
        }
    }
    return -1; // if element is not found in array we return -1 because index starts from 0
}              // and -1 is not a valid index so we can use it to indicate that element is not found

int main(){

    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int num; 
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;

    std::cout << "Enter element to search for: \n";
    std::cin >> num;

    index = searchArray(numbers , size , num);
    if(index != -1){
        std::cout << num << " is at index " << index;
    }
    else{
        std::cout << num << " is not in array\n";
    }

    return 0;
}
