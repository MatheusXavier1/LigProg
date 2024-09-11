#include <stdio.h>

int main(){
    int n1, n2;
    printf("ENTRE DOIS NUMEROS: ");
    scanf("%d %d", &n1,&n2);

    if(n1>n2){
        printf("%i e maior que %i", n1, n2);
    }

    if(n2>n1){
        printf("%i e maior que %i", n2,n1);
    }

    else{
        printf("os dois numeros sao iguais");
    }

    return 0;
}