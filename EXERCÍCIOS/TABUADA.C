#include <stdio.h>

int tabuada(int fator);

int main(){
    int fator;

    printf("Escolha um numero para fazer sua tabuada: ");
    scanf("%d", &fator);
    tabuada(fator);
    return 0;
}

int tabuada(int fator){
    for(int c=0; c<11; c++){
        printf("%d * %d = %d", fator,c,fator*c);
        printf("\n");
    }
    
    return 0;
}