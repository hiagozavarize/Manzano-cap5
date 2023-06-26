#include <stdio.h>

int main(){

     int B, Exp, P=1;
    
    printf("Digite a base: ");
    scanf("%d", &B);
    printf("Digite o expoente: ");
    scanf("%d", &Exp);
   
    for (int n = 1; n <= Exp; n++)
    {
        P *= B;
    }
    
    printf("%d elevado a %d = %d", B, Exp, P);

    return 0;
}