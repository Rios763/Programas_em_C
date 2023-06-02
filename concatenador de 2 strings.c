/*
 *       ENUNCIADO
 *       Faça um programa que concatene duas strings em uma.
 *
 *
*/
#include <stdio.h>
#include <string.h>

int main(){

    char s1[100], s2[100], sres[200];
    int t1, t2, i;

    printf("Digite a primeira string (tamanho maximo 100):\n");
    fgets(s1, 100, stdin);
    s1[strlen(s1) - 1] = '\0';

    printf("Digite a segunda string (tamanho maximo 100):\n");
    fgets(s2, 100, stdin);
    s2[strlen(s2) - 1] = '\0';


    t1 = strlen(s1);
    t2 = strlen(s2);

    for(i=0; i<t1; i++){
        sres[i] = s1[i];
    }

    for(i=0; i<t2; i++){
        sres[i+t1] = s2[i];
    }
  
    sres[t1+t2] = '\0';

    printf("%s", sres);

    return 0;
}
