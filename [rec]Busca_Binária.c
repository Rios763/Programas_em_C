#include <stdio.h>
#include <stdlib.h>


int bb_rec(int v[], int ini, int fim, int chave){

    int meio = (ini+fim) / 2;

    // condição parada 1: chave encontrada;
    if(v[meio] == chave)
        return meio;

    // condição parada 2: chave não existe no vetor;
    else if(fim < ini)
        return -1;

    else {
        // se a chave for menor do que meio;
        if(chave < v[meio])
            return bb_rec(v, ini, meio-1, chave);
        else //chave maior que meio;
            return bb_rec(v, meio+1, fim, chave);
    }
}

int main(){

    int vet[] = {3,8,12,52,78,87,105,147,208,222};
    int chave = 78;

    printf("Posicao da chave = %d", bb_rec(vet,0,9,chave));
}
