#include <iostream>
//local variables= declared inside a function or block{}
//global variables= declared outside of all functions 

int myNum = 3; //global

void printNum();
int main(){
    int myNum = 1; //local
    printNum();
    std::cout << "main: " << myNum << '\n'; //local
    std::cout << "global num: " << ::myNum << '\n';
    return 0;
}
void printNum(){
    int myNum = 2; //local
    std::cout << "printNum: "<< myNum << '\n'; //local
    //std::cout << ::myNum << '\n'; //global
}

