#include <iostream>
void pizza();
void pizza(std::string topping1);
void pizza(std::string topping1, std::string topping2);
int main(){
    pizza("cut", "lon");
    return 0;
}
void pizza(){
    std::cout<<"Here is your pizza \n ";
}
void pizza(std::string topping1){
    std::cout<<"Here is your "<< topping1<< " pizza\n ";}
void pizza(std::string topping1, std::string topping2){
    std::cout<<"Here is your "<< topping1<< " and "<<topping2 <<" pizza\n ";}