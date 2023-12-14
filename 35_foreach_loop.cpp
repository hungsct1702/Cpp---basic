#include<iostream>
int main(){
    char grades[]={'A','B','C','D'};
    for(char i: grades){
        std::cout<<i<<"\n";
    }
     return 0;
}