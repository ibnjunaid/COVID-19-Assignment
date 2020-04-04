#include "matrix-functions.c"

int main(){
    int C1 , C2, R1 , R2 ;
    C1 = C2 = R1 = R2 = 3;
    
    int mat1[3][3] = {{1,2,5},{3,4,6},{10,11,12}};
    int mat2[3][3] = {{11,21,51},{23,24,26},{12,12,15}};

    int mat[2][2] = {{1,1},{1,1}};
    int x = isCommutative((int*)mat1,(int *)&mat2,3,3,3,3);
    int y = isCommutative((int*)mat,(int *)&mat,1,1,2,2);
    int z = isCommutative((int*)mat,(int *)&mat,2,2,2,2);
    
    printf("%d",y);
}
