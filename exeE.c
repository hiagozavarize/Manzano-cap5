#include <stdio.h>

int main(){

 int num = 0;
 
    printf("Os números ímpares de 0 a 20 são: ");
    do
    {   
        if (num % 3 == 0)
        {
            printf("%d ", num);
        }
        num++;

    } while (num <= 20);

    return 0;
}