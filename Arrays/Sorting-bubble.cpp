//Repeatedly swaps adjacent elements if they’re in the wrong order
//Easy to understand, not efficient
 
#include <iostream>

void sort(int array[], int size){

    int temp;

    for(int i=0 ; i < (size-1) ; i++){
        for(int j=0 ; j < (size-i-1) ; j ++){
            if(array[j] > array[j+1]){  // for descending order change to <
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }

        }
    }
}

int main(){
    int array[] = {1,4,2,6,4,8,9,7};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int i=0 ; i < size ; i++){
        std::cout << array[i] << " " ;
    }

    return 0;
}