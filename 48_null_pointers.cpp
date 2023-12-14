#include <iostream>
//null value = a special value that has no value 
//nullptr
int main(){
    int * pointer= nullptr;
    int x= 5;
    //pointer= &x;
    if(pointer== nullptr){
        std::cout<<"address was not assigned!\n";
    }
    else{
        std::cout<<"address was assigned\n";
        std::cout<<*pointer; 
    }
    return 0;
}