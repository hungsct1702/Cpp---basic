#include<iostream>
main(){
    int correct=8; //implicit
    int questions=10;
    double score= (double)correct/questions * 100;   //(double).... explicit
    std::cout<<score<< "%"; 
    return 0;

}
