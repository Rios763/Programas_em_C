/* 

Enunciado:
     Faça um programa que leia uma string e imprima o inverso dela.

*/

#include <stdio.h>
#include <string.h>

int main(){
   
   char str[80], str2[80];
   int tam, aux, i;

   printf("Digite a string: \n");
   fgets(str, 80, stdin);

   tam = strlen(str);
   aux = tam - 1;

    str2[tam] = '\0';

    for(i=0; i<=tam; i++){
        str2[aux] = str[i];
        aux--; 
      
    }

    printf("\n%s\n", str);
    printf("%s", str2);
}
