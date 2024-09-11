#include <stdio.h>

void RaioCirculo();

int main(){
    RaioCirculo();
    return 0;
}

void RaioCirculo(){
    float area,raio;
    
    printf("qual e o raio do circulo? ");
    scanf("%f",&raio);
    
    area = 3.14*raio*raio;

    printf("A area do seu circulo de raio %.1f e = %.1f", raio, area);
}