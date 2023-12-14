#include <iostream>
template <typename T, typename U> // template   // if use only T it is consider only 1 data type
auto max(T x, U y){ 
    return(x>y) ? x:y;
    
}
int main(){
    std::cout<<max(1,2.6)<<'\n';
    return 0;
}