#include <iostream>
#include <ctime>
int main(){
    srand(time(0));   
    int randNum = rand()%5 + 1;
    switch(randNum){
        case 1: 
        std:: cout<< " You win an iphone!";
        break;
        case 2: 
        std:: cout<< " You win a house!";
        break;
        case 3: 
        std:: cout<< " You win an apple!";
        break;
        case 4: 
        std:: cout<< " You win a shirt!";
        break;
        case 5: 
        std:: cout<< " You win a girl friend!";
        break;
    }
    
    return 0;
}