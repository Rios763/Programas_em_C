/*
ENUNCIADO
    Leia dois vetores com 5 inteiros cada e cheque se existem elementos iguais.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vetor1[5], vetor2[5], vetor3[5], i, j, cont=0;

   printf("Digite os valores do primeiro vetor: \n");

   for(i =0; i<5; i++){
    scanf("%d", &vetor1[i]);
   }

   printf("Digite os valores do segundo vetor: \n");

   for(j =0; j<5; j++){
    scanf("%d", &vetor2[j]);
   }

   for(i=0; i<5;i++){
      for(j=0;j<5;j++){
        if( vetor1[i] == vetor2[j] ){
             vetor3[cont]=vetor2[j];
             cont++;
        }
      }
   }

   if(cont!=0){
     printf("Os numeores repitidos sao:\n");
     for(i=0; i<cont; i++){
        printf("%d \t", vetor3[i]);
     }
   } else printf("Nao existem valores repitidos no programa");

    return 0;
}
