/*Use this when you don’t know how many times the loop should run.
  this is basically a if statement that can repeat endlessly
*/
#include <iostream>
int main(){

    std::string name;
    
    while(name.empty()){
    std::cout << "What's your name\n";
    std::getline(std::cin, name);
    }

    std::cout << "Welcome to the site\n";

return 0;
}
