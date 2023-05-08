/*
ENUNCIADO

    Faça um programa que leia um inteiron(no máximo 50) e imprima uma saída da forma:

    1
     2
      3
       4
        5

*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int valor_n;
    printf("Insira um valor inteiro 'n' (menor do que 50): \n\t");
    scanf("%d",&valor_n);

    if(valor_n > 50){
        printf("Valor invalido!");
        return 0;
    }


    for(int i=1; i<=valor_n;i++){
        for(int c=1;c<=valor_n; c++){
            if(c == i)
            printf("%d ", c);
            else printf(" ");

        }
        printf("\n");
    }


    return 0;
}
