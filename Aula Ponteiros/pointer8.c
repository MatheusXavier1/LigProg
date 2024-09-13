#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i , *ptr, sum = 0;
    printf("entre o tamanho do seu array:\n");
    scanf("%d",&n);
    ptr = (int*) malloc(n *sizeof(int));
    printf("você tem um array de %d posições\n", n);
    printf("entre numeros para preencher seu array\n");
    for(i = 0; i < n; i++){
        scanf("%d", ptr+i);
        sum += *ptr+i;
    }
    for(int c = 0; c < n; c++){
        printf("%d\n",ptr[c]);
    }
    
    return 0;
}
