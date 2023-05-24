#include <stdio.h>
#include <stdlib.h>

int main(){

int gru[10];
int vector[10];
int soma1 = 0;
int soma2 = 0;
int maior1=0;
int maior2=0;
int pos1=0;
int pos2=0;

printf("DIGITE OS VALORES DO GRU:\n");
for(int i=0; i<10 ; i++){
    scanf(" %i", &gru[i]);
}

printf("DIGITE OS VALORES DO VECTOR:\n");
for(int i=0; i<10 ; i++){
    scanf(" %i", &vector[i]);
}

soma1 = gru[0];
for(int i=0; i<10 ;i++){
    soma1 = soma1 + gru[i];
}

soma2 = vector[0];
for(int i=0; i<10 ;i++){
    soma2 = soma2 + vector[i];
}

for(int i=0; i<10 ;i++){
    
    if(maior1 < gru[i]){
        maior1 = gru[i];
        pos1 = i;
    }
}

for(int k=0; k<10 ;k++){
    
    if(maior2 < vector[k]){
        maior2 = vector[k];
        pos2 = k;
    }
}


printf("Soma gru: %i\n", soma1);
printf("Soma gru: %i\n", soma2);
printf("\n");

if(soma1 > soma2){
    printf("Maior soma eh no gru\n");
}
if(soma1 < soma2){
    printf("Maior soma eh no vector\n");
}

if(soma1 == soma2){
    printf("A soma dos dois vetore eh a mesma\n");
}

printf("Maior valor do gru: %i\n", maior1);
printf("Maior valor do vector: %i\n", maior2);
printf("Posicao do maior valor no gru: %i\n", pos1);
printf("Posicao do maior valor no vector: %i\n", pos2);





    return 0;
}
