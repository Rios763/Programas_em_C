#include <stdio.h>
#include <stdlib.h>


int soma(int v[], int n);

int main(){

    int vet[] = {10,20,30,40,50};

    printf("Soma rec = %d", soma(vet, 4));

    return 0;
}

int soma(int v[], int n){
    if(n==0)
        return v[n];
    else
        return v[n] + soma(v, n-1);

}
