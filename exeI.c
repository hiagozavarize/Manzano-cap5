#include <stdio.h>

int main(){

    int atual = 0, anterior = 1, proximo;

    for (int i = 0; i <= 14; i++)
    {
        printf("%d \n", atual);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        
    }

    return 0;
}