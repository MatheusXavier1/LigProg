#include <stdio.h>

void CalculaMulta();

int main(){
    CalculaMulta();
    return 0;
}
void CalculaMulta(){
    float Peso, Excesso, Multa;
    printf("Quantos quilos de peixe você pescou hoje, Joao?\n");
    scanf("%f",&Peso);

    Excesso = Peso-50;
    Multa = Excesso*4.00;
    if(Peso>50){
        printf("Voce pescou %.1fkg a mais do permitido hoje. Devera pagar uma multa de R$%.1f",Excesso,Multa);
    }
    else{
        printf("Sem multas por hoje.");
    }

}