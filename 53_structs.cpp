#include <iostream>
//Structures (also called structs) are a way to group several related variables into one place.
// Each variable in the structure is known as a member of the structure.
struct student{
    std::string name;
    double gpa;
    bool enrolled;
};
int main()
{
    student student1;
    student1.name="Spongebob";
    student1.gpa=3.2;
    student1.enrolled=false;
    std::cout<<student1.name<<"\n";
    std::cout<<student1.gpa<<"\n";
    std::cout<<student1.enrolled<<"\n";
    return 0;
}