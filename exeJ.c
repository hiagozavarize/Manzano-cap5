#include <stdio.h>

int main(){

    float celsius, fahrenheit;

    for (celsius = 10; celsius <= 100; celsius += 10)
    {   
        fahrenheit = celsius * 9/5 + 32;
        printf("%.1f celsius equivalem a %.1f fahrenheit \n", celsius, fahrenheit);
        
    }
    return 0;
}