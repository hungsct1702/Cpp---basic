#include <iostream>

unsigned long long int factorial(int num);

int main(){
    int size;
    std::cout<<"type factorial you want to calculate: ";
    std::cin>> size;
    std::cout<<"You factorial is: " <<factorial(size);
    return 0;

}

unsigned long long int factorial(int num){  // unsigned long long: larger range 
    if(num>1){
        return num*factorial(num-1);}
    else{
        return 1;
    }
}

