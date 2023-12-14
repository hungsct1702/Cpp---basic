#include <iostream>
class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string x, int y, double z){
        name=x;
        age=y;  // if have the same name use : this-> name=name;
        gpa=z;
    }

};
int main(){
    Student student1("Spongebob", 25, 3.2);
    Student student2("Patrick", 30, 1.9);
    std::cout<<student2.name<<"\n";
    std::cout<<student2.age<<"\n";
    std::cout<<student2.gpa<<"\n";
    return 0;
}