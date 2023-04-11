/*
ENUNCIADO

    Digitar n valores da sequencia de Fibonacci.

        A serie Fibonacci:

        1 1 2 3 5 8 13 21 34 55

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor_a=1,    valor_b=1,    valor_n,    valor_temp=0;

    printf("Digite quantos digitos Fibonacci gostaria de imprimir.\n");

    scanf("%d",&valor_n);

    for (int i=1    ; i<=valor_n    ; i++){


        printf("%2d : %10d\n",i,valor_b);

        valor_temp=valor_a;
        valor_a +=valor_b;
        valor_b  =valor_temp;
    }

    return 0;
}
