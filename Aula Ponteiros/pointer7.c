#include <stdio.h>

void addOne(int *ptr){
    (*ptr)++;
}

int main()
{
    int *p, i = 10;
    p = &i;
    addOne(p);
    printf("%d\n",*p); //p está recebendo o mesmo endereço que i
    printf("%d", i);
    return 0;
}
