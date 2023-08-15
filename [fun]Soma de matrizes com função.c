/*
    Faça um programa que realize a soma de matrizes utilizando funções

*/

#include <stdio.h>


void soma(int mat1[10][10], int mat2[10][10], int mat3[10][10], int n){

    int i, j;
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

}


int main()
{
    int mat1[10][10], mat2[10][10], mat3[10][10], n, i, j;

    printf("Digite o tamanho das matrizes (Máximo 10): \n");
    scanf("%d", &n);

    printf("Digite os valores da matriz 1: \n");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Digite os valores da matriz 2: \n");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    soma(mat1,mat2,mat3, n);

    printf("\n");
    printf("\n");
    printf("Soma das matrizes: \n");

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf(" %d", mat3[i][j]);
        }
        printf("\n");
    }

}

