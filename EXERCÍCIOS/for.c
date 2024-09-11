#include <stdio.h>

void main(){
    int numero;
    printf("Escolha um número: ");
    scanf("%d", &numero);
    
    for(int i; i<10; i++){
        printf("%d\n", numero+1);
    }
}