#include <stdio.h>

void cmpm();

int main(){
    cmpm();
    return 0;
}

void cmpm(){
    float metro, cm;
    printf("entre um valor em metros: ");
    scanf("%f", &metro);
    cm = metro*100;
    printf("seu valor %.1f m em cm e = %.1fcm",metro,cm);
}