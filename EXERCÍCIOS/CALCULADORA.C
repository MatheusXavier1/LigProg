#include <stdio.h> // incluindo a biblioteca de input e output

int main(){
    float n1,n2;
    char op; // variavel pro operador

    printf("QUE OPERACAO VOCÊ QUER REALIZAR?(+,-,*,/): "); //pedindo a operação
    scanf("%c", &op); //lendo a operação

    printf("DIGITE DOIS NUMEROS: "); // pedindo o primeiro número
    scanf("%f %f", &n1, &n2); // lendo o primeiro número

    switch(op) // e com a variavel OP. "Se for o caso de op = ..., faça isso"
    {
    case '+': // caso op = '+': 
        printf("%.1f + %.1f = %.1f", n1,n2,n1+n2);  // as porcentagens-letra (%i), são indicadores de que vai entrar uma variavel ali de um certo tipo. (I)nt, (C)har, (S)tring
        break;
   
    case '-':
        printf("%.1f - %.1f = %.1f", n1,n2,n1-n2);
        break;

    case '*':
        printf("%.1f * %.1f = %.1f", n1,n2,n1*n2);
        break;

    case '/':
        printf("%.1f / %.1f = %.1f", n1,n2,n1/n2);
        break;

    default:
        printf("Operador desconhecido.");
        break;
    }
    return 0;
}