/* 

Enunciado:
    Escreva um programa que leia um vetor de até 50 números reais e calcule a média destesvalores.
*/

#include <stdio.h>

int main(){
    float vetor[50], media =0;
    int i=0, n;


    printf("Digite a quantidade de numeros dentro do vetor (limite 50)\n");
    scanf("%d", &n);

    printf("Digite os valores a serem atribuidos aos vetores: \n");
    
    for(i=0; i<n; i++){
        scanf("%f", &vetor[i]);
        media += vetor[i];
    }

    media = media/n;

    printf("a media e: %.2f", media);
    
}
