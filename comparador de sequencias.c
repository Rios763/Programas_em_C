/* 

Enunciado:
    Dadas duas sequências de n e m valores inteiros, onde n <= m, escreva um programa queverifica quantas vezes a primeira sequência 
    ocorre na segunda.
    Exemplo:

    primeira sequência: 1 0 1
    segunda sequência:  1 1 0 1 0 1 0 0 1 1 0 1 0
    Resultado: 3
*/

#include <stdio.h>

int main(){
   int n[100], m[100], cont, cont2 = 0, i, j, q, q2;

    printf("Digite a quantidade dos valores da primeira sequencia:\n");
    scanf("%d", &q);
    
    printf("Digite a quantidade dos valores da segunda sequencia:\n");
    scanf("%d", &q2);

    printf("Digite os valores da primeira sequencia:\n");
    for(i = 0; i<q; i++)
        scanf("%d", &n[i]);

    printf("Digite os valores da segunda sequencia:\n");
    for(i = 0; i<q2; i++)
        scanf("%d", &m[i]);
    

    for(i = 0; i<q2-q+1; i++){
        cont = 0;


        for(j = 0; j<q2; j++){
            if(m[i+j] == n[j])
                cont++;
        }

        if(cont == q)
            cont2++;
    }

    printf("\n repeticoes: %d", cont2);
}
