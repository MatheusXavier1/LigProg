#include <stdio.h>

void salario();

int main(){
    salario();
    return 0;
}

void salario(){
    int horas;
    float salario,valor;

    printf("quantas horas voce trabalha no mes? ");
    scanf("%d",&horas);
    printf("quanto voce recebe por hora? ");
    scanf("%f",&valor);
    
    salario=horas*valor;
    printf("voce recebera um salario de %.1f reais",salario);
}