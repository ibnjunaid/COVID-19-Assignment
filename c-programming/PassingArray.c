#include<stdio.h>


void SkipArrayElementByOne(int Array[],int size){
    for(int i=0; i<size; i++){
        if(i%2 != 0){
            printf("%d ",Array[i]);
        }
    }
}


int main(){
    int a_array[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    SkipArrayElementByOne(a_array,15);
}
