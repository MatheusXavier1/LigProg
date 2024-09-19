#include <stdio.h>

void main() {
   int x, *p;
   x = 100;
   p = x; // p está recebendo o conteúdo de x
   printf("Valor de p: %d\n", p); // 100
   printf("x %d", x);
}