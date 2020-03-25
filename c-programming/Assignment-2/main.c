#include<stdio.h>
#include "functions.c"

int main(){
    int matrix [3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    int matrix2 [3][4]= { {20,21,22,23 },{30,31,32,33},{40,41,42,43}};
    printf("Sum of Column\n");
    
    sumOfColumns(matrix);
    
    printf("Matrix Subtract:\n");

    matrixSubtract(matrix,matrix2);

    printf("Sum of Row \n");

    sumOfRow(matrix2);

    printf("Increment by 20\n");

    incrementEachElementBy20(matrix2);
}
