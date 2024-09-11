#include <stdio.h>

int main(){
int *ponteiro;
int c;
c = 22;

printf("endereco de c: %p\n", &c);
printf("valor de c: %d\n\n",c);

ponteiro = &c;

printf("(minha ideia)endereço de ponteiro: %p\n",&ponteiro); // o ponteiro aponta pra um lugar aleatório mesmo antes de ser atribuido algo?
printf("endereço de ponteiro: %p\n",ponteiro);
printf("conteudo de ponteiro: %d\n\n",*ponteiro);
c = 11;
printf("endereço do ponteiro: %p\n",ponteiro);
printf("conteudo de ponteiro: %d\n\n",*ponteiro);
*ponteiro = 2;
printf("endereco de c: %p\n",&c);
printf("conteúdo de c: %d\n",c); //direto por c
printf("conteúdo de c: %d",*ponteiro);//pelo conteúdo dentro do ponteiro
return 0;
}