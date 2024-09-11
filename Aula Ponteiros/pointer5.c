#include <stdio.h>

int main(){
    int x[6]; // array de 6 vetores
    int sum = 0; // variavel "sum" inicializada com 0
    printf("entre 6 numeros\n");
    for(int i = 0; i<6; i++){
        scanf("%d", x+i); // faz o scan e atribui ao array x na posição "i"
        sum+= *(x+i); // sum = sum + conteúdo de x na posição i
        // printf("%p\n",x+i);
        //printf("%p\n",&x[i]);
        // printf("%p\n",x);
    }
    printf("sum = %d",sum); //printa o valor final de sum

    return 0;
}