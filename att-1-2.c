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
