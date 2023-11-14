#include <stdio.h>
#include <stdlib.h>


int pot(int x, int n);

int main(){

    int base, expoente;

    printf("Digite a base:");
    scanf("%d", &base);
    printf("Digite o expoente:");
    scanf("%d", &expoente);

    printf("O resultado da potencia: %d", pot(base, expoente));

    return 0;

}

int pot(int x, int n){

    if(n==0)
        return 1;
    else
        return x * pot(x, n-1);

}
