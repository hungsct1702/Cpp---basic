#include <iostream>

void happybirthday(std::string name, int age);
    
int main(){
    // function = a block of reusable code
    
    std:: string name= "Hung";
    int age = 18;
    happybirthday(name, age);
    happybirthday(name, age);
    return 0;
}
    void happybirthday(std::string name, int age){
    std::cout<<"Happy birthday to "<<name<<"\n";
    std::cout<<"Happy birthday to "<<name<<"\n";
    std::cout<<"Happy birthday to "<<name<<"\n";
    std::cout<<"You are "<<age<<"\n\n";}