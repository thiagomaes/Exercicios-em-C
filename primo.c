#include <stdio.h>

int main (){

    int divisor,n,cont;
    printf("\nInsira um número para verificar se ele é primo\n");
    scanf("%i", &n);
    divisor = n;
    if(n <= 0){
        return 0;
    }
    while(divisor >= 1){
        if(n % divisor == 0){
          cont = cont + 1;
        }
        divisor = divisor - 1;
    }
    if(cont == 2){
        printf("O numero %i eh primo",n);
    }else{
        printf("O numero %i nao eh primo",n);
    }
    
    return 0;
}
