/*
Enunciado:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * concatena(char *s1, char *s2);
void printar(s1);

int main(void){

    char str1[100], str2[100], *res;

    gets(str1);
    gets(str2);

    printar(str1);
    printar(str2);

    res = concatena(str1, str2);
    printar(res);

}

void printar(char s1[]){
    for (int i=0;s1[i]!='\0';i++){
        printf("%c",s1[i]);
    }
    puts("");
}

char * concatena(char *s1, char *s2){

    char *sres;
    int tam1, tam2, i;

    tam1 = strlen(s1);
    tam2 = strlen(s2);
    sres = malloc((tam1*sizeof(char)) + (tam2*sizeof(char)));

     for(i=0; i<tam1; i++){
        sres[i] = s1[i];
    }

    for(i=0; i<tam2; i++){
        sres[i+tam1] = s2[i];
    }

    sres[tam1+tam2] = '\0';

    return sres;
}
