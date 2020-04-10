#include<stdlib.h>
struct Complex{
    int real;
    int imaginary;
};   


struct Complex *add(struct Complex *a,struct Complex *b){
    struct Complex *result = malloc(sizeof(struct Complex));
    
    result->real = a->real + b->real;
    
    result->imaginary = a->imaginary + b->imaginary;

    return result;
}
