#include <stdio.h>

double media(int vet[], int indice, int tamanho);

int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};

    printf("%.2f", media(vetor,0,10)/2);
}

double media(int vet[], int indice, int tamanho){
    if(indice == tamanho){
        return 0;
    } else{
        return (vet[indice] + media(vet,indice+1,tamanho));
    }
}
