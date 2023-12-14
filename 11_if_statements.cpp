#include <iostream>
int main(){
    int age;
    std::cout<< "Enter your age: ";
    std::cin>> age;
    if(age>=18){
        std::cout<<"You are allowed to watch porn!";
    }  
    else if(age<=0){
        std::cout<<"You are not even born to watch porn!";
    }
    else{
        std::cout<<"PLEASE LEAVE THIS PAGE RIGHT NOW!";
    }
     return 0;
}