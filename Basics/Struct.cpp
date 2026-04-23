// A struct is a user-defined data type that can hold multiple variables of different types.
// Variables in struct are known as members of the struct. Structs are used to group related data together and can be used to create complex data structures.
// Memebers are be accessed with the dot operator (.) and can be initialized using an initializer list or by assigning values to each member individually.

#include<iostream>

struct student{
    std::string name; 
    double gpa;
    int iq;
};

void printStudent(student s);

int main(){

    student atigya;
    atigya.name = "Atigya";
    atigya.gpa = 8.5;
    atigya.iq = 120;

    student arpit;
    arpit.name = "arpit";
    arpit.gpa = 8.3;
    arpit.iq = 125;

    printStudent(atigya);
    printStudent(arpit);
}

void printStudent(student s){
    std::cout << "Name: " << s.name << '\n';
    std::cout << "GPA: " << s.gpa << '\n';
    std::cout << "IQ: " << s.iq << '\n';
}   
// Structs are pass by value, which means that when a struct is passed to a function, a copy of the struct is created. 
//This can lead to performance issues if the struct is large. To avoid this, you can pass a pointer to the struct instead of the struct itself.