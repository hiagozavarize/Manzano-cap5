#include <stdio.h>

int main(){

    int result, num;

    for (num = 1; num <= 100; num++)
    {
        result = result + num;
    }
    printf("O resultado é %d", result);

    return 0;
}