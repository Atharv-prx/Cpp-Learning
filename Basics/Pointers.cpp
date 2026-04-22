// Pointer = It is a variable that stores the memory address of another variable. 
//           We use pointers because sometimes it is easier to use address.
// & = adress of operator
// * = dereference operator

#include <iostream>
int main(){

    std::string name = "Yash";
    std::string pokemons[3] = {"Pikachu", "Bulbasaur", "Charmander"};

    std::string *pName = &name;
    std::string *pPokemons = pokemons; // array is already an adress so we don't need to use & operator

    std::cout << pName << '\n'; // contains the memory address of name variable
    std::cout << *pName << '\n'; // accessing the value at the address stored within pointer variable

    std::cout << pPokemons << '\n'; // contains the memory address of the first element of the array
    std::cout << *pPokemons << '\n'; 

    return 0;
}