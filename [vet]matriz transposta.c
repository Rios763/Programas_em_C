/*
    Enunciado
        Enunciar uma matriz e mostrar sua transposta em seguida.

*/


#include <stdio.h>


int main(){


   int vetor1[10][10], vetor2[10][10], n, i, j;

   printf("Digite o tamanho da matriz quadrada (n de linhas = n de colunas): \n");
   scanf("%d", &n);


   printf("Digite os valores da primeira matriz: \n");

   for(i =0; i<n; i++){
        for(j=0;j<n;j++){
            scanf("%d", &vetor1[i][j]);
        }
   }


   for(i =0; i<n; i++){
        for(j=0;j<n;j++){
            vetor2[i][j] = vetor1[j][i];
        }
   }

   printf("\n \n");

   for(i =0; i<n; i++){
        for(j=0;j<n;j++){
            printf("%d ", vetor1[i][j]);
        }
        printf("\n");
   }

     printf("\n \n");

   for(i =0; i<n; i++){
        for(j=0;j<n;j++){
            printf("%d ", vetor2[i][j]);
        }
        printf("\n");
   }

  return 0;
}
