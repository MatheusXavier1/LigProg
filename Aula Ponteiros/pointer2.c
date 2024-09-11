#include <stdio.h>

int main(){
    int *ponteiro;
    int c;
    c = 5;
    ponteiro = &c; //ponteiro recebe o endereço de c
    printf("%d",*ponteiro); //printando o conteudo de "ponteiro"
}
//output: 5