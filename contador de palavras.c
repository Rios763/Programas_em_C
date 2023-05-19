/*
    Enunciado
        Crie um codigo que conte o numero de palavras

*/


#include <stdio.h>
#include <string.h>

int main(){

    int  cont=1;
    char st[100];

    gets(st);
    for(int i=0; i<100; i++){
        if(st[i] == ' ' && st[i+1] != ' ')
            cont++;
    }

    printf("%d", cont);
    //strlen(st)

    return 0;
}

