#include <stdio.h>

int main() {
  
    int num, soma, fat;

    for (int i = 0; i < 15; i++){
        printf("Digite o %d numero a ser calculado seu fatorial: ", i+1);
        scanf("%d", &num);
        
        for(fat = 1; num > 1; num = num - 1){
            fat = fat * num;
        }
        soma += fat;
    }

    printf("A soma dos fatoriais de cada numero é: %d", soma);
    
  return 0;
}