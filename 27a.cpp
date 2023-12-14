#include <iostream>
 
std::string concatString(std::string string1, std::string string2);
 
int main()
{
    std::string firstName = "Bro";
    std::string lastName = "Code";
    std::string fullName = concatString(firstName, lastName);
 
    std::cout << "Hello " << fullName;
 
    return 0;
}
std::string concatString(std::string string1, std::string string2){
    return string1 + " " + string2;
}

