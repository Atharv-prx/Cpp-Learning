// Special method within a class that is automatically called when an object of that class is created.
// Usefull for assigning values to artibutes as arguments.

#include <iostream>

class Pokemons{
    public:
        std::string name;
        std::string type;
        int level;

        // Constructor                                             // Can also do like this:
        Pokemons(std::string name, std::string type, int level){   //Pokemons(std::string x , std::string y , int z)
            this->name = name;                                     // name = x;
            this->type = type;                                     // type = y;
            this->level = level;                                   // level = z;
        }
};
int main(){
    Pokemons pokemons1 ("Pikachu", "Electric", 25);
    Pokemons pokemons2 ("Charmander", "Fire", 15);

    std::cout << "Name: " << pokemons1.name << std::endl;
    std::cout << "Type: " << pokemons1.type << std::endl;   
    std::cout << "Level: " << pokemons1.level << std::endl;

    std::cout << "Name: " << pokemons2.name << std::endl;
    std::cout << "Type: " << pokemons2.type << std::endl;
    std::cout << "Level: " << pokemons2.level << std::endl;

    return 0;
}