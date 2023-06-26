#include <stdio.h>

int main(){

    int num = 6;// tabuada de um número qualquer
    int result;

    printf("     Tabuada do %d\n", num);
    printf("======================\n");
    for (int i = 0; i <= 10; i++)
    {
        result = num * i;
        printf("%d X %d = %d\n", num, i, result);    
    }
    printf("======================\n");
    
    return 0;
}