#include <stdio.h>
#include <stdlib.h>

int main(){

    int var = 15;
    int *ptr;

    ptr = &var;

    printf("Contudo de var: %d\n",var);
    printf("endereco de var: %p\n",&var);
    printf("Contudo apontado por ptr: %d\n",*ptr);
    printf("endereco apontado por ptr: %p\n",ptr);
    printf("endereco de ptr: %p\n",&ptr);
    printf("\n\n");
    *ptr = 73;
    printf("Contudo de var: %d\n",var);
    printf("endereco de var: %p\n",&var);
    printf("Contudo apontado por ptr: %d\n",*ptr);
    printf("endereco apontado por ptr: %p\n",ptr);
    printf("endereco de ptr: %p\n",&ptr);
    return 0;
}