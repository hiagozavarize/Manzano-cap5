#include <stdio.h>

int main() {
  
  int num, soma, media;

  for (int i = 0; i < 10; i++){
    printf("Digite o %d valor: ", i+1);
    scanf("%d", &num);

    soma += num;
    media = soma/10;
  }

  printf("A soma total é %d\nA media do somatório é %d", soma, media);
  

  return 0;
}