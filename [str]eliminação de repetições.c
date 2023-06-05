/* 

Enunciado:
    Faça um programa que leia duas strings e elimine, da segunda string, todas as ocorrências dos caracteres da primeira string.

*/

#include <stdio.h>
#include <string.h>

int main(){
   
   char str[80], aux[80], str2[80];
   int tam, tam2, cont =0, i, j = 0;

    //coleta de dados
   printf("Digite a primeira string: \n");
   fgets(str, 80, stdin);

   printf("Digite a segunda string: \n");
   fgets(str2, 80, stdin);

   tam = strlen(str);
   tam2 = strlen(str2);

    //Substitui os espaços por *
    for(i = 0; i<tam - 1; i++){
        for(j = 0; j<tam; j++){
            if(str[i] == str2[j])
                str2[j] = '*';
        }
    }

    //Adiciona todos os caracteres que não fore * à uma terceira string
    j = 0;
    for(i =0; i<tam2; i++){
        if(str2[i] == '*'){
            cont++;
        } else{
            aux[j] = str2[i];
            j++;
        }
    }

    aux[tam2 - cont] = '\0';

    
    printf("Resultado:\n");
    printf("\nstring 1: %s \n", str);
    printf("string 2: %s", aux);

}
