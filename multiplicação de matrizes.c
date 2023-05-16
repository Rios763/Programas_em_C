/*
ENUNCIADO
    Faça um programa que realize a multiplicacao de 2 matrizes.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{


   int vetor1[2][2], vetor2[2][2], vetor3[2][2], i, j,k=0, cont=0;

   printf("Digite os valores do primeiro vetor: \n");

   for(i =0; i<2; i++){
        for(j=0;j<2;j++){
            scanf("%d", &vetor1[i][j]);
        }
   }

   printf("Digite os valores do segundo vetor: \n");

   for(i =0; i<2; i++){
        for(j=0;j<2;j++){
            scanf("%d", &vetor2[i][j]);
        }
   }


   for(i =0; i<2; i++){
        for(j=0;j<2;j++){
            vetor3[i][j]=0;
            for(k=0;k<2;k++){
                vetor3[i][j] += vetor1[i][k] * vetor2[k][j];
            }
        }
   }

    for(i =0; i<2; i++){
        for(j=0;j<2;j++){
            printf("%d ", vetor3[i][j]);
        }
   printf("\n");
   }
    return 0;

}
