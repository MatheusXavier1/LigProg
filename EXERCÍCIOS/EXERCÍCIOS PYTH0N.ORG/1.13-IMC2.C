#include <stdio.h>

void IMC();

int main(){
    
    IMC();
    return 0;
}

void IMC(){
    char sexo;
    float PesoIdeal,altura;
    printf("qual o seu sexo?(M/F)\n");
    scanf("%c",&sexo);
    printf("qual e a sua altura?\n");
    scanf("%f",&altura);

    if(sexo=='M'){
        PesoIdeal = (72.7*altura)-58;
        printf("seu peso ideal e: %.1f",PesoIdeal);
    }
    if (sexo=='F')
    {
        PesoIdeal = (62.1*altura)-44.7;
        printf("seu peso ideal e: %.1f",PesoIdeal);
    }
}