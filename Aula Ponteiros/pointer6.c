#include <stdio.h>

int main(){
    int i, x[6], sum = 0;
    printf("Entre 6 numeros\n");

    for(i = 0; i<6; i++){
        scanf("%d",x+i);// x+i = x[i]
        sum += *(x+i); // conteúdo de x na posição i
    }
    printf("sum = %d\n",sum);
    return 0;
}