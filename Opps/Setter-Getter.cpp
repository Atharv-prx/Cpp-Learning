// Abstraction- Hiding uneccessary details from the user
// Getter- Function that makes a private attribute READABLE
// Setter- Function that makes a private attribute WRITABLE

#include <iostream>

class Stove{
    private:
        int Temperature = 0;
    
    public:
    int  getTemperature(){ // This is getter use this when u only want stuff to be readable
        return Temperature;
    }
    void setTemperature(int Temperature ){ // This is setter- use this when u want stuff to be writable
        if(Temperature < 0){
            std::cout << "Temperature cannot be negative." << std::endl;
        }
        else if(Temperature > 500){
            std::cout << "Temperature cannot be greater than 500." << std::endl;
        }
        else{
            this->Temperature = Temperature;
        }
    }
};

int main(){

    Stove Stove1;

    Stove1.setTemperature(-1); 

    std::cout << "Temperature: " << Stove1.getTemperature() << std::endl; 
    return 0;
}