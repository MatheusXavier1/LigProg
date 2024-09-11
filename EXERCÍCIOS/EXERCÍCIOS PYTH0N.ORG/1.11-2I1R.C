#include <stdio.h>

void calcula();

int main(){
    calcula();
    return 0;

}

void calcula(){
    int n1,n2,n3;
    printf("entre tres numeros: ");
    scanf("%d %d %d", &n1,&n2,&n3);
    int pot = n3*n3*n3;
    printf("o produto do dobro de %d com a metade de %d e: %d \n", n1,n2,(n1*2)*(n2/2));
    printf("a soma do triplo de %d com %d e: %d\n",n1,n3,(n1*3)+n3);
    printf("%d elevado ao cubo e: %d",n3,pot);
}