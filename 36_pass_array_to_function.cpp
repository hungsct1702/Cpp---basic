#include <iostream>
double getTotal(int size, double prices[]);
int main(){
    double prices[]={51.2,20.6, 35.5, 40.9, 50.3 };
    int size = sizeof(prices)/sizeof(prices[0]);
    double total= getTotal(size, prices);
    std::cout<<"The total is: " <<total;
    
    return 0;
}
double getTotal(int size, double prices[]){
    double total=0;
    for(int i=0; i<size; i++){
        total+=prices[i];
    }
    return total;
}