#include <stdio.h>

void main() {
   int x, y, *p; y = 0;
   p = &y; // p recebe o mesmo edereço que y
   x = *p; //x recebe o conteúdo de p (y)
   printf("%p\n",*p);
   printf("%d\n",x);
   x = 4; // só x recebe 4, *p continua igual a antes
   printf("%d\n",&y);
   printf("%p\n",*p);
   printf("%d\n",x);
   (*p)++;
   --x;
   printf("%p\n",*p);
   printf("%d\n",x);
   (*p) += x;
   printf("%p\n",*p);
   printf("%d\n",x);
}