/*
Enunciado
Faça um programa que lê dois números inteiros positivos A e B. Utilizando laços, o seu programa deve calcular e imprimir a potencia
de A elevado à B.

*/

#include <stdio.h>

int main(){
int a, b, resultado;

printf("Utilizando somente numeros inteiros positivos->\n");
printf ("Digite a base A da potencia:\n");
scanf("%d", &a);
printf ("Digite o expoente B da potencia:\n");
scanf("%d", &b);

resultado = 1;
for( int i =0; i<b; i++){
    resultado *= a;


}

printf("O resultado da potencia e: %d", resultado);
}
