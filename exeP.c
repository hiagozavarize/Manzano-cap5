#include <stdio.h>

int main() {
  int soma, media;

  for (int i = 50; i <= 70; i++){
    if (i % 2 == 0){
        soma += i; 
    }else{
        continue;
    }
    media = soma/11;// 11 é a quantidade de números pares entre 50 e 70
  }
  printf("O somatorio dos numeros pares de 50 a 70 e: %d\n", soma);
  printf("A media e: %d", media);


  return 0;
}