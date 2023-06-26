#include <stdio.h>

int main() {
  float fat = 1;
  int num;
  
  for(int i = 1; i <= 10; i++){
    if(i % 2 != 0){
      for(num = i; num >= 1; num--){
        fat *= num;
      }
      printf("o fatorial de %d é %.1f\n", i, fat);
    }else{
      continue;
    }
  }
  return 0;
}