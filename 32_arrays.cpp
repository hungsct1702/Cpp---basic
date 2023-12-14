#include <iostream>
int main(){
//array is a variable that holds multiple values
    std::string car[]={"Ducati","Camry"};
    car[0]="camero";
    std::cout<<car[1]<<"\n";   // number of array start with 0
    std::cout<<car[0]<<"\n";
    
    return 0;
}