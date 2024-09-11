#include <stdio.h>

void area();

int main(){
    area();
    return 0;
}

void area(){
    float l, area;
    printf("Entre o valor do lado do quadrado: ");
    scanf("%f",&l);
    area = l*l;
    printf("Seu quadrado de lado %.1f tem uma area de %.1f \n",l,area);
    printf("o dobro desta area e de %.1f",area*2);
}