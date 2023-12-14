#include <iostream>

void sort(int array[], int size);

int main(){
    int array[]{10,9,8,6,7,4,5,3,2,1,0};
    int size= sizeof(array)/sizeof(array[2]);
    sort(array,size);
    for(int element: array){
        std::cout<< element<<"\n";
    }
    return 0;
}

void sort(int array[], int size){
    int temp;
    for(int i=0; i<size -1; i++){
        for(int j=0; j<size-1-i; j++){
            if (array[j]>array[j+1]){
                temp= array[j];
                array[j]=array[j+1];
                array[j+1]=temp;}
    }
    }
}