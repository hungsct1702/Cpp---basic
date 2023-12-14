#include <iostream>
struct Car{
    std::string model;
    int year;
    std::string color;
};
void printCar(Car car);
void paintCar(Car &car, std::string color);
int main(){
    Car car1;
    Car car2;
    car1.model="Mustang";
    car1.year=2023;
    car1.color= "blue";

    car1.model="Corvette";
    car1.year=2025;
    car1.color= "red";
    std::cout<<&car1<<"\n";
    paintCar(car1, "silver");         // usually passing a struct uses the copy, 
                                      //use & to call the original
    printCar(car1);             
    return 0;
}
void printCar(Car car){
    std::cout<<&car<<"\n";
    std::cout<< car.model <<"\n";
    std::cout<< car.year <<"\n";
    std::cout<< car.color <<"\n";
}
void paintCar(Car &car, std::string color){
    car.color=color;
}