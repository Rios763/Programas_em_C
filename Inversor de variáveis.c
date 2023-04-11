/*
Questão

Faça um programa que leia dois valores inteiros nas variáveisxeye troque o conteúdodas variáveis.

*/
#include <stdio.h>

int main()
{
int variavel1, variavel2, c;

printf("Digite o valor da primeira variavel:\n");
scanf("%d",&variavel1);

printf("Digite o valor da segunda variavel:\n");
scanf("%d",&variavel2);

variavel1= variavel1 + variavel2; 
variavel2= variavel1 - variavel2;
variavel1= variavel1 - variavel2;

printf("Os valores invertidos das variaveis sao: %d e %d\n", variavel1, variavel2);
scanf("%d", &c)

}
