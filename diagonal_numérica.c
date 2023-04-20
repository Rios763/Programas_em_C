/*
ENUNCIADO

    faca um programa que leia um numero n e
    imprima n linhas na tela com seguinte formato (exemplo para n=6)
    
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4 5 6
*/


#include stdio.h
#include stdlib.h


int main()
{

    int valor_n;
    printf(Insira um valor inteiro nnt);
    scanf(%d,&valor_n);
    printf(nn);
    for (int i=1; i=valor_n;i++){
            for (int j=1; j=i; j++){
                printf(%2d ,j);
            }
        printf(n);
    }


    return 0;
}



