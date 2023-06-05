/* 

Enunciado:
    Faça um programa que leia do teclado uma string (possivelmente com espaços) de até 80caracteres e que
    então salve a string lida em uma nova removendo-se os espaços EXTRAS.
    Exemplo:
    Entrada = Out    of the night that    covers me
    Saída = Out of the night that covers me

*/

#include <stdio.h>
#include <string.h>

int main(){
   
   char str[80], str2[80];
   int tam,cont =0, i = 0, j=0;

   printf("Digite a string: \n");
   fgets(str, 80, stdin);

   tam = strlen(str);

    for(i =0; i<tam; i++){
        if(str[i] == ' ' && str[i+1] == ' '){
            cont++;
        } else{
            str2[j] = str[i];
            j++;
        }
    }

    str2[tam - cont] = '\0';

    printf("\nString inicial: %s\n", str);
    printf("Resultado: %s", str2);
}
