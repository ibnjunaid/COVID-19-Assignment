#include<stdbool.h>
#include<stdio.h>
bool isCommutative(int *MatA, int *MatB,int R1,int C1,int R2,int C2){
   if(C1 != R2 || C2 != R1){
       
       //In order for matrix multiplication to be defined, 
       //the number of columns in the first matrix must be equal to the number of rows in the second matrix.
      
       printf("\nMatrix Multiplication condition not satisfied\n");
       return false;
   }
  int AxB[R1][C2];
   
  int BxA[C1][R2]; 

  //Performing MatA * MatB

  for(int i=0; i<C1; i++){
      int elem =0;
      for(int j=0; j<R2; j++){
           elem += *((MatA+i*R2) +j) * *((MatB+j*R2) +i);
           AxB[i][j] = elem;
      }
  }

//Performing MatB * MatA
  for(int i=0; i<C2; i++){
      int elem =0;
      for(int j=0; j<R1; j++){
           elem += *((MatB+i*R1) +j) * *((MatA+j*R1) +i);
           BxA[i][j] = elem;
      }
  }

  //checking Element-wise equivalance

  for(int i=0 ;i<R1; i++){
    for(int j=0; j<C1; j++){
        if ( AxB[i][j] != BxA[i][j] ){
            return false;
        }
    }
  }
  return true;
}
