//Inheritance- When a class can recieve attributes and methods from another class.
//Children class inherits from parent class 
//Help to reuse similar code found within multiple classes

#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
            std::cout << "This animal is eating." << std::endl;
    }
};
class Dog : public Animal{ // Dog is the child class and Animal is the parent class
    public:
        void bark(){
            std::cout << "The dog is barking." << std::endl;
        }
};
class Cat : public Animal{ // Cat is the child class and Animal is the parent class
    public:
        void meow(){
            std::cout << "The cat is meowing." << std::endl;
        }
};

int main(){

    Dog dog1;
    Cat cat1;

    std::cout << "Is the dog alive? " << dog1.alive << std::endl; // Inherited from Animal class   
    dog1.eat(); // Inherited from Animal class
    dog1.bark(); // Specific to Dog class

    std::cout << "Is the cat alive? " << cat1.alive << std::endl; // Inherited from Animal class
    cat1.eat(); // Inherited from Animal class  
    cat1.meow(); // Specific to Cat class

    return 0;
}