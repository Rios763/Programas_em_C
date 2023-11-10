#include <stdio.h>
#include <stdlib.h>


int print(int v[], int n);

int main(){

    int vet[] = {10,20,30,40,50};

    printf("Elementos do vetor =");
    print(vet, 0);

    return 0;
}

int print(int v[], int n){
    printf(" %d ", v[n]);

    if(n==4)
        return v[n];
    else
        return print(v, n+1);

}
