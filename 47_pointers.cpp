#include <iostream>

int main() {

    // pointers = variable that stores a memory address of another variable
    //                    sometimes it's easier to work with an address         

    // & address-of operator
    // * dereference operator
    std::string name = "Hung";
    int age = 18;
    std::string freePizza[3]={"pizza 1","pizza 2","pizza 3"};
    std::string *pName= &name;
    int *pAge= &age;
    std:: string *pPizza= freePizza;
    
    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pPizza << '\n';
    
    
    
    return 0;
}
