#include <stdio.h>

int main (){

    int cont,i,j,maior,menor;
    
    printf("\nInsira os valores");
    scanf("%i",&i);
    scanf("%i",&j);
    
    if(i > j){
        maior = i;
        menor = j;
    }else{
        maior = j;
        menor = i;
    }
    
    while(cont <= 5 ){
        printf("\nInsira os valores");
        scanf("%i",&i);
        
        if(i > maior){
            maior = i;
        }
        if(menor > i){
            menor = i;
        }
      
        
        cont = cont + 1;
    }
    printf("\n%i",maior);
    printf("\n%i",menor);
    return 0;
}
