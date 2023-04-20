/*
ENUNCIADO

    faca um programa que leia um numero n e
    imprima um bloco de n por n com símbolos (*), sendo a diagonal o simbolo (+)

    +****
    *+***
    **+**
    ***+*
    ****+

*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int valor_n;
    printf("Insira um valor inteiro n\n\t");
    scanf("%d",&valor_n);

    for(int i=1; i<=valor_n;i++){
        for(int c=1;c<=valor_n; c++){
            if(c == i)
            printf("+ ");
            else printf("* ");

        }
        printf("\n");
    }


    return 0;
}



