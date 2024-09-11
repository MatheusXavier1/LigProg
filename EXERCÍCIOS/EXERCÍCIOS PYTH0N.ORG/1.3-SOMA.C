#include <stdio.h>

void soma();

int main(){

    soma();
    return 0;
}

void soma(){
    int n1,n2;
    printf("escreva um numero: ");
    scanf("%d",&n1);
    printf("escreva outro numero: ");
    scanf("%d",&n2);
    printf("A soma dos seus dois numero e %d",n1+n2);
}