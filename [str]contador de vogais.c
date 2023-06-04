/*
 *       ENUNCIADO
 *       Faça um programa que conte o número de vogais em uma string.
 *
 *
*/
#include <stdio.h>
#include <string.h>

int main(){

    char s1[100];
    int t1, cont, i;

    printf("Digite a string (tamanho maximo 100):\n");
    fgets(s1, 100, stdin);
    s1[strlen(s1) - 1] = '\0';
    t1 = strlen(s1);


    for(i=0; i<t1; i++){
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
            cont ++;
    }

    printf("%d", cont);


    return 0;
}
