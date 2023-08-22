#include <stdio.h>

void mult(int mat1[10][10], int mat2[10][10], int mat3[10][10], int n){

    int i, j, k;

    // Cálculo das matrizes
    for(i =0; i<n; i++){
        for(j=0;j<n;j++){
            mat3[i][j]=0; // Zera o valor presente na matriz para evitar que os valores fiquem malucos por conta do "+="
            for(k=0;k<n;k++){
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
   }
}

int main()
{
    int mat1[10][10], mat2[10][10], mat3[10][10], n, i, j;

    // input do tamanho de TODAS as matrizes
    printf("Digite o tamanho das matrizes (Maximo 10): \n");
    scanf("%d", &n);

    // input valores da primeira matriz
    printf("Digite os valores da matriz 1: \n");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    // input da segunda matriz
    printf("Digite os valores da matriz 2: \n");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    // chamar a função
    mult(mat1,mat2,mat3, n);

    // impressão dos resultados
    printf("\n");
    printf("\n");
    printf("Multiplicacao das matrizes: \n");

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf(" %d", mat3[i][j]);
        }
        printf("\n");
    }
}
