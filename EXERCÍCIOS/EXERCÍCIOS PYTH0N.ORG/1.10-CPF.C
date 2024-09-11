#include <stdio.h>
void temperatura();

int main(){

    temperatura();
    return 0;

}
void temperatura(){
    float c,f;
    printf("Temperatura em celsius: ");
    scanf("%f",&c);
    f = (1.8*c)+32;
    printf("sua temperatura em graus fahrenheit e: %.1f",f);  
}