#include <stdio.h>

int main() {
  float graos = 0;

  for(int casas = 0; casas <= 63; casas++){
    graos++;
    printf("%.1f\n", graos);
    graos *= 2;
  }
  return 0;
}