/* 

Enunciado:
    Escreva um programa que leia duas palavras do teclado e determina se a segunda é um anagramada primeira. 
    Uma palavra é um anagrama de outra se todas as letras de uma ocorrem na outra, em mesmo número, independente da posição. 
    Exemplos:ROMA, MORA, ORAM, AMOR, RAMO são anagramas entre si.

*/

#include <stdio.h>
#include <string.h>

int main(){
   
   char str[80], str2[80];
   int tam,cont =0, i = 0, j=0;

   printf("Digite a primeira string: \n");
   fgets(str, 80, stdin);

   printf("Digite a segunda string: \n");
   fgets(str2, 80, stdin);

   tam = strlen(str) - 1;

    for(i = 0; i<tam; i++){
        for(j = 0; j<tam; j++){
            if(str[i] == str2[j])
                cont++;
        }
    }

    if(cont == tam)
        printf("Sao anagramas");
    else printf("Nao sao anagramas");

}
