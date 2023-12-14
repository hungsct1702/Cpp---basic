#include <iostream>

double square(double length);
double cube(double length);

int main()
{
    double length;
    std::cout<< "Enter length: ";
    std::cin>> length;
    std::cout << "Area: " << square(length) << "cm^2\n";
    std::cout << "Volume: " << cube(length) << "cm^3\n";

    return 0;}

double square(double length){
    return length*length;}
double cube(double length){
    return length*length*length;}