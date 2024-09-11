#include <stdio.h>

int main(){
    int var = 5;
    printf("var: %d\n",var);
    printf("endereco de var: %p\n",&var);
    printf("endereco de var: %d",&var); // printar o endereço de uma variavel com %d ao inves de %p, printa o endereço da memória convertido de hexadecimal para decimal

    return 0;
}