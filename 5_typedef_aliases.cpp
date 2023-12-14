//typedef = reserved keyword used to create an additonal name(alias) for another data type
// new identifier for an existing type
#include <iostream>
using namespace std;
// typedef std::string text_t; 
// typedef int number_t;      
// typedef can be replaced with "using"
using text_t = std::string;
using number_t =int;
int main(){
    text_t first_name ="Hung";
    number_t age=18;
    cout<< first_name<< '\n';
    cout<< age<<" years old" <<'\n';
    return 0;
}