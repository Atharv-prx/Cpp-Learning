// Objects = Collection of attributes and methods
// Attributes are characteristics of an object
// Methods are actions that an object can perform
// Objects can be used to mimic real-world entities and their behavior
// To create an object, we need to define a class that serves as a blueprint for the object.
// The class defines the attributes and methods that the object will have.
// Once we have defined the class, we can create instances of the class, which are the actual objects.

#include <iostream>

class Human {
    public:
        // Attributes
        std::string name;
        int age;
        std::string occupation;

        // Methods
        void eat(){
            std::cout <<  name << " is eating." << std::endl;
        }
        void drink(){
            std::cout << name << " is drinking." << std::endl;
        }
        void sleep(){
            std::cout << name << " is sleeping." << std::endl;
        }
};

int main(){

    Human human1;
    Human human2;

    human1.name = "Alice";
    human1.age = 30;
    human1.occupation = "Software Engineer";

    human2.name = "Bob";
    human2.age = 25;
    human2.occupation = "Graphic Designer";

    std::cout << "Name: " << human1.name << std::endl;
    std::cout << "Age: " << human1.age << std::endl;
    std::cout << "Occupation: " << human1.occupation << std::endl;

    std::cout << "Name: " << human2.name << std::endl;
    std::cout << "Age: " << human2.age << std::endl;
    std::cout << "Occupation: " << human2.occupation << std::endl;

    human1.eat();
    human1.drink();
    human1.sleep();

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}