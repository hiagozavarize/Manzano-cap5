#include <stdio.h>

int main() {
  int num;
  
  for(int i = 1; i <= 10; i += 2){
    int fat = 1;
    for(num = i; num >= 1; num--){
      fat *= num;
    }
    printf("o fatorial de %d é %d\n", i, fat);
  }
  return 0;
}