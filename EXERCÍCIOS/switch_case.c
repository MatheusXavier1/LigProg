#include <stdio.h>

void main(){
    char operation;
    double n1, n2;
    printf("entre um operador (+,-,*,/): ");
    scanf("%c",&operation);
    printf("entre dois valores: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operation)
    {
    case '+':
        printf("%.1lf + %.1lf =  %.1lf", n1,n2,n1+n2);
        break;

    case '-':
        printf("%.1lf - %.1lf =  %.1lf", n1,n2,n1-n2);
        break;

    case '*':
        printf("%.1lf * %.1lf =  %.1lf", n1,n2,n1*n2);
        break;

    case '/':
        printf("%.1lf / %.1lf =  %.1lf", n1,n2,n1/n2);
        break;
        
    default:
        printf("operador desconhecido");
        break;
    }

}