#include <stdio.h>

int main (){

    int divisor,n;
    printf("\nInsira um número para verificar se ele é primo\n");
    scanf("%i", &n);
    divisor = n;
    if(n <= 0){
        return 0;
    }
    while(divisor >= 1){
        if(n % divisor == 0){
            printf("\n%i",divisor);
        }
        divisor = divisor - 1;
    }
    

    return 0;
}
