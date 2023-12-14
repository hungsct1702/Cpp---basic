#include <iostream>

int main()
{
    // break = break out of a loop
    // continue = skip current iteration

   for(int i= 0; i<=20; i+=2){
        if (i==14){
            continue;}
        std::cout << i << '\n';
    }

    return 0;
}