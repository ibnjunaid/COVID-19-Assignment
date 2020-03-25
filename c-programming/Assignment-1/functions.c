#include<stdbool.h>
#include<math.h>
#include<stdio.h>

bool oddOrEven(int number){
    return number%2; 
}

int numberReverse(int number){
    int digitCount =0;
    int reversedNumber =0;
    int number_cpy = number;
    while(number){
        number = number/10;
        digitCount++;
    }
    while(digitCount){
        digitCount--;
        reversedNumber += ((number_cpy%10)*pow(10,digitCount)); 
        number_cpy = number_cpy/10;
    }
    return reversedNumber;
}

void multipicationTableGenerator(int number ){
    for (int i=1; i<10; i++){
        printf("%d x %d : %d\n",number,i,number*i);
    }
}
