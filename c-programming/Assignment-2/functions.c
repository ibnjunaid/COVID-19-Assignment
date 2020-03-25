//helper functions


void matrixPrinter(int mat[3][4]){
    for(int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}


//End of helper functions

/* 
 * 1. Write a program in C to read an array of an integer of order 3×4. 
 * Find out the sum of each row. 
 * Display sum each row as well as the entered array in tabular format
   on the screen.
 */
void sumOfRow(int arr[3][4]){
    int sum_row;
    for(int i=0; i<3; i++){
        sum_row = 0;
        for(int j=0; j<4; j++){
            sum_row += arr[i][j];
        }
        printf("%d\n",sum_row);
    }
}


/* 
 * 2. Write a program in C to read an array of an integer of order 3×4. 
 * Find out the sum of each column. 
 * Display sum each column as well as entered array in tabular
    format on the screen using function call.
 */
void sumOfColumns(int arr[3][4]){
    int sum_col;
    for(int j=0; j<4 ;j++){
        sum_col = 0;
        for(int i=0; i<3; i++){
            sum_col += arr[i][j];
        }
        printf("%d\n",sum_col);
    }
}

/* 
 * 3. Write a program in C to read an array of an integer of order 3×4. 
 * Give an increment of 20 to each element of this array. 
 * Display this modified array on the screen in a tabular format using function call.
*/

void incrementEachElementBy20(int arr[3][4]){
    for(int i=0; i<3 ;i++){
        for(int j=0; j<4; j++){
            printf("%d ",arr[i][j] + 20);
        }
        printf("\n");
    }
}


/* 
 4.Write a program in C to read two matrices A and B of order 3×4. Find out the
 subtraction of these two matrices. Display Both entered matrix as well the sum of
 these two matrices on the screen.
*/

void matrixSubtract(int arr1[3][4],int arr2[3][4]){
    int resultantMatrix[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            resultantMatrix[i][j] = arr1[i][j] - arr2[i][j];
        }
    } 
    printf("\nMatrix 1: \n");
    matrixPrinter(arr1);
    printf("\nMatrix 2: \n");
    matrixPrinter(arr2);
    printf("\nResultant Matrix: \n");
    matrixPrinter(resultantMatrix);       
}
