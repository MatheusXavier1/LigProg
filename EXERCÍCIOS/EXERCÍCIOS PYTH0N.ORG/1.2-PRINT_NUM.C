#include <stdio.h>

void RecebeNum();

int main(){
    RecebeNum();
    return 0;
}
void RecebeNum(){
    int num;
    printf("escreva um numero: ");
    scanf("%d",&num);
    printf("%d", num);
}