#include <stdio.h>

int main(){

    int num = 1, result;

    do
    {
        if (num % 2 == 0)
        {
            result = result + num;
        }
        num++;

    } while (num <= 500);

    printf("O somatório de 1 a 500 é %d", result);

    return 0;
}
