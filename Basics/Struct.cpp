// A struct is a user-defined data type that can hold multiple variables of different types.
// Variables in struct are known as members of the struct. Structs are used to group related data together and can be used to create complex data structures.
// Memebers are be accessed with the dot operator (.) and can be initialized using an initializer list or by assigning values to each member individually.

#include<iostream>

struct student{
    std::string name; 
    double gpa;
    bool enrolled;
};

int main(){

    student atigya;
    atigya.name = "Atigya";
    atigya.gpa = 8.3;
    atigya.enrolled = true;

    std::cout << atigya.name << " has a GPA of " << atigya.gpa << " and is currently " << (atigya.enrolled ? "enrolled" : "not enrolled") << "." << std::endl;

    return 0;
}

