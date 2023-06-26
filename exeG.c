#include <stdio.h>
#include <math.h>

int main(){

    int result;

    for (int pot = 0; pot <= 15; pot++)
    {
        result = pow(3, pot);
        printf("3 elevado a %d = %d\n",pot, result);
    }

    return 0;
}