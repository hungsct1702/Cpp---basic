#include <iostream>
 
int main()
{
   int number;
//do while loop= do some block of code first; then repeat again if the condition is true
    do{
      std::cout << "Enter a positive #: ";
      std::cin >> number;} while(number <= 0);

   std::cout << "The # is: " << number;

   return 0;
}