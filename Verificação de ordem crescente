/*
  EXERCÍCIO
    Fazer um programa que lê números inteiros do teclado, e no final informa se os números
    lidos estão ou não em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

int n, indicadora, valor, valor2;
indicadora=0;

printf("Digite a quantidade de numeros: \n");
scanf("%d", &n);


printf("Digite o primeiro numero: \n");
scanf("%d", &valor);

for(int i = 0; i<(n-1); i++){
    printf("Digite o proximo numero: \n");
    scanf("%d", &valor2);


    if(valor2<valor){
        indicadora = 1;
        break;
    }
    else
        valor = valor2;

}

if(indicadora == 0)
    printf("\n Os numeros estao em ordem crescente\n");
else
    printf("\n Os numeros nao estao em ordem crescente\n");

}
