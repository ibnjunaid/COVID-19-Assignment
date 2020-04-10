/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/04/2020 12:07:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OSAMA BIN JUNAID, 
 *   Organization:  SISTER NIVEDITA UNIVERSITY
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "complex.c"

int main(){
    struct Complex c1,c2;
    c1.real = 5;
    c1.imaginary = 9;

    c2.real = 5;
    c2.imaginary =6;

    struct Complex *ret = add(&c1,&c2);
    
    printf("After Sum ::\n"); 
    printf("%d",ret->real);
    printf("+%di\n",ret->imaginary);
}
