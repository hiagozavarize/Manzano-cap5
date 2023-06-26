#include <stdio.h>

int main() {

    int valor, maior, menor, i = 1;

    printf("Valor %d: ", i++);
    scanf("%d", &valor);

    maior = valor;
    menor = valor;

    while (valor >= 0)
    {
        if (valor > maior){
            maior = valor;
        }
        if (valor < menor){
            menor = valor;
        }
     
        printf("Valor %d: ", i++ );
        scanf("%d", &valor);
       
    }
    printf("O maior valor e: %d", maior);
    printf("\nO menor valor e: %d", menor);

  return 0;
}