#include <stdio.h>

int main() {

    int soma, media, nums_lidos, num, qtd_nums;


    printf("Quantos n�meros deseja ler? ");
    scanf("%d", &qtd_nums);


    for (int i = 0; i < qtd_nums; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &num);

        if (num < 0){
            break;
        }else{
            soma += num;
            nums_lidos = i+1;
        }
    }
    media = soma/qtd_nums;
    
    printf("A soma dos %d n�meros lidos foi %d e a m�dia foi %d", nums_lidos, soma, media);
    
  return 0;
}