#include <iostream>
int main(){
    srand(time(NULL));  // Seed the random number generator
    int num = (rand() % 6) +1;   // random number from 1 to 6
    std:: cout << num;
    return 0;
}