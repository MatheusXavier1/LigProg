#include <stdio.h>
void temperatura();

int main(){

    temperatura();
    return 0;

}
void temperatura(){
    float c,f;
    printf("Temperatura em farenheit: ");
    scanf("%f",&f);
    c = 5*((f-32)/9);
    printf("sua temperatura em graus celcius e: %.1f",c);  
}