#include <stdio.h>

int main(){

    int r, dividendo, divisor;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o Divisor: ");
    scanf("%d", &divisor);

    for (r = 0; dividendo >= divisor; r++)
    {
        dividendo -= divisor;
    }
    
    printf("O divisor cabe %d vez(es) no dividendo", r);

  return 0;
}