#include <iostream>
//inheritance= a class can receive attributes and methods from another class
//children classes inherir from a Parent class
// helps to reuse similar code found within multiple classes
class Animal{
    public:
        bool alive=true;
    void eat(){
        std::cout<<"This animal is eating\n";
    }
};
class Dog: public Animal{
    public:

    void bark(){
        std::cout<<"The dog goes wolf\n";
    }
};
class Cat: public Animal{
    public:
    void meow(){
        std::cout<<"The cat goes meow!\n";
    }
};
int main(){
    Dog dog;
    Cat cat;
    std::cout<<cat.alive<<"\n";
    cat.eat();
    cat.meow();

    return 0;
}
