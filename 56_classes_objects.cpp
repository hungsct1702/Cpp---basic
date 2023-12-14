#include <iostream>
class Human{
    public:
        std::string name="Rick";
        std::string occupation= "doctor";
        int age=20;

        void eat(){        // classes contain characteristics and functions
            std::cout<<"This person is eating\n";
        }
        void drink(){
            std::cout<<"This person is drinking\n";}
        void sleep(){
            std::cout<<"This person is sleeping\n";   }
};
int main(){
    Human human1;
    Human human2;
    human1.name = "David";
    human1.occupation="scientist";
    human1.age=50;

    human2.name = "Hung";
    human2.occupation="student";
    human2.age=18;

    std::cout<<human1.name<<"\n";
    std::cout<<human1.occupation<<"\n";
    std::cout<<human1.age<<"\n";
    
    std::cout<<human2.name<<"\n";
    std::cout<<human2.occupation<<"\n";
    std::cout<<human2.age<<"\n";
    
    human1.eat();
    human1.drink();
    human1.sleep();
    return 0;
}