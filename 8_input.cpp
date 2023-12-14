#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    cout<< " What's your name?";
    getline(cin, name);   // use when input a string
    cout<< "What's your age?";
    cin>> age;
    cout<< "Hello " << name <<'\n';
    cout<< "You are the most handsome person in "<< age;
    return 0;

}