#include <stdio.h>

void media();

int main(){

    media();

    return 0;
}
void media(){
    float n1,n2,n3,n4;
    printf("entre suas 4 notas do bimestre: ");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);
    printf("Sua media e: %.1f", (n1+n2+n3+n4)/4);
}
