/* 

Enunciado:
     Faça um programa que leia duas sequências de números inteiros distintos e salve cadasequência em um vetor. 
     Suponha que o número máximo de elementos de uma sequênciaé 50. Suponha que cada um destes vetores represente um conjunto contendo
     os elementosnele armazenados. O programa deve então salvar em um terceiro vetor o resultado dainterseção dos dois primeiros
    vetores e imprimir o resultado.

    v1: [1 2 3 4 5]
    v2: [2 5 7 1 -9 18]
    Resultado: [1, 2, 5]
*/

#include <stdio.h>

int main(){
   int v1[100], v2[100], v3[100], i, j, l = 0, q, q2;

    printf("Digite a quantidade dos valores da primeira sequencia:\n");
    scanf("%d", &q);
    
    printf("Digite a quantidade dos valores da segunda sequencia:\n");
    scanf("%d", &q2);

    printf("Digite os valores da primeira sequencia:\n");
    for(i = 0; i<q; i++)
        scanf("%d", &v1[i]);

    printf("Digite os valores da segunda sequencia:\n");
    for(i = 0; i<q2; i++)
        scanf("%d", &v2[i]);
    

    for(i = 0; i<q; i++){
        for(j = 0; j<q2; j++){
            if(v1[i] == v2[j]){
                v3[l] = v1[i];
                l++;
            }
        }
    
    }

    printf("[");
    for(i = 0; i<l; i++)
        printf("%d, ", v3[i]);
    printf("]");
}
