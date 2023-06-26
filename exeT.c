#include <stdio.h>
#include <math.h>

int main(){

    int quadrado, num = 15, i;

    for (i = 15; i <= 200; i += 3)
    {
       quadrado = pow(i, 2); ;
       printf("O quadrado de %d e: %d\n", num, quadrado);
       num += 3;
    }
    return 0;
}