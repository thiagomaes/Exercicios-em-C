#include<stdio.h>
 #define TAM 5


//att1
 int main()
{
  int gru[TAM];
  int pos;
  int n;

printf("Digite o valo para somar no vetor:\n");
scanf(" %i", &n);


  for(pos=0 ; pos < TAM ; pos++){

    scanf(" %i", &gru[pos]);
      printf("* %i\n", gru[pos] + n);

  }

  return 0;
} 

//att2
int main()
{
    int gru[TAM];
    int pos;
    int n;
    
    printf("Digite o valor para somar no vetor: \n");
    scanf(" %i", &n);
    
    for(pos=0 ; pos < TAM ; pos++){
        
     scanf(" %i", &gru[pos]);
     
     if(pos % 2 == 0){
        printf("* %i\n", gru[pos] + n);

     }
     else{
                 printf("* %i\n", gru[pos]);
     }
    }   
      return 0;


}

#include<stdio.h>
 #define TAM 5


//att3
 int main()
{
  int gru[TAM];
  int pos;
  int menor;
  int y;

printf("Escreva os numeros do vetor");

  for(pos=0 ; pos < TAM ; pos++){
      
        scanf(" %i", &gru[pos]);
      }
    menor = gru[0];
    
    for(pos = 1; pos < TAM ; pos++){
        if(menor > gru[pos]) {
            menor = gru[pos];
            y=pos;
        }
   }
    printf("Menor: %i \n", menor);
    printf("Posição: %i \n", y);

        
    
  

  return 0;
} 
