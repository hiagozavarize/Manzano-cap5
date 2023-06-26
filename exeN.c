#include <stdio.h>

int main() {

    int soma, media, nums_lidos, num, qtd_nums;


    printf("Quantos números deseja ler? ");
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
    
    printf("A soma dos %d números lidos foi %d e a média foi %d", nums_lidos, soma, media);
    
  return 0;
}