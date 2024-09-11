#include <stdio.h>

int main(){
    int x[4];
    for(int i = 0; i<4;i++){
        printf("endereco de x[%d] = %p\n",i,&x[i]);
    }
    printf("endereco da array: %p\n",x);
    printf("endereco da array: %p",&x); //são a mesma coisa?
}