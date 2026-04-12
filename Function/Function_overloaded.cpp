#include <iostream>

void bakePizza();
void bakePizza(std::string Topping1);

int main(){

    bakePizza("pepperoni");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your Pizza!\n";
}
void bakePizza(std::string Topping1){
    std::cout << "Here is your " << Topping1 << " pizza\n";
}
// a function name with it's parameter type is knwon as function signature