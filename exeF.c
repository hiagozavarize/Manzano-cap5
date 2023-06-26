#include <stdio.h>

int main(){

    for (int num = 1; num < 200; num++)
    {
        if (num % 4 == 0)
        {
            printf("O números divisiveis por 4 de 1 a 200 são: %d\n", num);
        }
        
    }

    return 0;
}