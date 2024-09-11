#include <stdio.h>
#include <stdlib.h>

int main(){

    int *array;
    int n;
    
    printf("entre um tamanho para seu array\n");
    scanf("%d",&n);
    array = (int *) malloc(n*sizeof(int));

    for(int i = 0; i<n;i++){
        array[i]=i;
    }
    printf("voce tem um array de %d posicoes\n",n);
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }


    return 0;
}