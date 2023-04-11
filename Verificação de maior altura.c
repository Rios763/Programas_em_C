/*
ENUNCIADO
Fazer um programa que lê n números do teclado e informa qual foi o maior numero lido.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

int n, valor = 0, valor2 = 0;

printf("Digite a quantidade de alturas a serem analisadas: \n");
scanf("%d", &n);


printf("Digite a primeira altura em centimetros: \n");
scanf("%d", &valor);

for(int i = 0; i<(n-1); i++){
    printf("Digite a proxima altura: \n");
    scanf("%d", &valor2);


    if(valor2>valor){
        valor = valor2;

}
}
printf("A maior altura e: %d", valor);
}
