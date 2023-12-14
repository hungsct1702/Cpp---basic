#include <iostream>
using namespace std;
int main(){
    double temp;
    char type;
    cout<< " **** WELCOME TO TEMPERATURE CONVERSION PROGRAM C<-->F ****\n";
    cout<< "Choose type of temperature you want to convert to(F/C)\n";
    cin>> type;
    
    if (type== 'F'|| type=='f'){
        cout<<"Enter temperature unit in C: \n";
        cin>> temp;
        temp= (temp*1.8)+32;
        cout<< "Temperature is "<< temp<<" F\n";}
    else if (type== 'C'|| type=='c'){
        cout<<"Enter temperature unit in F: \n";
        cin>> temp;
        temp= (temp-32)/1.8;
        cout<< "Temperature is "<< temp<<" C\n";}
    else{
        cout<<"Please try again!";}
    return 0;
}