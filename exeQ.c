#include <stdio.h>

int main() {
  char nome_comodo[30];
  char continuar;
  float largura, comprimento, area, area_total = 0;

  do{
    printf("Voce quer calcular a area de qual comodo? ");
    scanf("%s", nome_comodo);

    printf("Qual a largura da %s? ", nome_comodo);
    scanf("%f", &largura);
    printf("Qual o comprimento da %s? ", nome_comodo);
    scanf("%f", &comprimento);

    area = largura * comprimento;
    area_total += area;

    printf("A area da %s e %.1f metros quadrados\n", nome_comodo, area);

    printf("quer calcular a area de outro comodo (S/N)?");
    scanf("%s", &continuar);

  } while (continuar != 'n' && 'N');

    printf("A area total da casa e: %.1f metros quadrados", area_total);

  return 0;
}