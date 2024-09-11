#include <stdio.h>

void main(){
    int number;
    printf("Entre um inteiro: ");
    scanf("%d", &number);
    
    if(number%2 == 0){
        printf("É par");
    
    }
    else{
        printf("é impar");
    }
}   