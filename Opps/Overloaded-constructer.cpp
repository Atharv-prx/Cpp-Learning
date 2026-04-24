// Mutiple constructer with same name but different parameters is called overloaded constructer.
// Allow for varying number of arguments when creating an object.

#include <iostream>

class Pizza{
    public:
        std::string Topping1; 
        std::string Topping2;
    Pizza(){
    }    
    Pizza(std::string Topping1){
        this->Topping1 = Topping1;
    }   
    Pizza(std::string Topping1, std::string Topping2){
        this->Topping1 = Topping1;
        this->Topping2 = Topping2;
    }  
};

int main(){

    Pizza pizza1("Pepperoni");
    Pizza pizza2("Mushroom" , "Peppers");
    Pizza pizza3;

    std::cout << "Topping: " << pizza1.Topping1 << std::endl;
    std::cout << "Topping 1: " << pizza2.Topping1 << std::endl;
    std::cout << "Topping 2: " << pizza2.Topping2 << std::endl;

    return 0;
}