/*
Enunciado:
    Faça um programa que coloque os números em ordem crescente;
*/

#include <stdio.h>

int main(){
    int lista1[100], aux, verificador = 0, quantidade, numeros, i = 0;
    
    printf("Digite a quantidade de numeros a serem adicionados: \n");
    scanf("%d", &quantidade);

    printf("Digite os numeros: \n");
    for(i=0; i<quantidade; i++){
        scanf("%d", &lista1[i]);
    }

    while (verificador == 0){

        //Transformador
        for(i=0;i<quantidade-1; i++){
            if(lista1[i]>lista1[i+1]){
                aux = lista1[i];
                lista1[i] = lista1[i+1];
                lista1[i+1] = aux;
            }

        }

        //verificador
        for(i=0;i<quantidade-1; i++){
            if(lista1[i]<=lista1[i+1])
                verificador = 1;
            
            else{ 
                verificador =0;
                break;
            }
        }

    }
    
    for(i=0; i<quantidade; i++){
        printf("%d ", lista1[i]);
    }

}

    

