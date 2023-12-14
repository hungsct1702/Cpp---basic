#include <iostream>
int main() 
{
   // && = check if two conditions are true
   // || = check if at least one of two conditions is true
   // !  = reverses the logical state of its operand

   int temp;
   bool sunny;

   std::cout << "Enter the temperature: ";
   std::cin >> temp;
   std::cout << "Is it sunny?: ";
   std::cin>> sunny;
    if(temp <= 0  && temp >= 30){
      std::cout << "The temperature is bad!\n";
   }
   else{
      std::cout << "The temperature is good!\n";
   }
   
   if(sunny){
      std::cout << "It is sunny outside!";
   }
   else{
      std::cout << "It is cloudy outside!";
   }

   return 0;
}