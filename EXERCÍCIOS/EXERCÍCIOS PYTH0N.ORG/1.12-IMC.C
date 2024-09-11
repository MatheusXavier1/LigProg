#include <stdio.h>

void IMC();

int main(){
    
    IMC();
    return 0;
}

void IMC(){
    float PesoIdeal,altura;

    printf("qual e a sua altura?\n");
    scanf("%f",&altura);
    PesoIdeal = (72.7*altura)-58;
    printf("seu peso ideal e: %.1f",PesoIdeal);

}