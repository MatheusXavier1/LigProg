#include <stdio.h>

int main(){

    float horas,SalHor,Bruto,IR,INSS,Sindicato,Liquido,Desconto;

    printf("Quanto voce recebe por hora? ");
    scanf("%f", &SalHor);
    printf("Quantas horas voce trabalha no mes? ");
    scanf("%f", &horas);

    Bruto = SalHor*horas;
    IR = (11*Bruto)/100;
    INSS = (8*Bruto)/100;
    Sindicato = (5*Bruto)/100;
    Desconto = IR + INSS + Sindicato;
    Liquido = Bruto - Desconto;
    
    printf("+Salario Bruto: R$%.2f\n-IR (11%%): R$%.2f\n-INSS (8%%): R$%.2f\n-SINDICATO (5%%): R$%.2f\n=Salario Liquido: R$%.2f\n",Bruto,IR,INSS,Sindicato,Liquido);
    return 0;
}