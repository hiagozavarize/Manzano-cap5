#include <stdio.h>

int main(){
    
    int quad;

    for (int num = 15; num < 200; num++){

        quad = num * num;
        printf("%d ", quad);
    }
    
    return 0;
}