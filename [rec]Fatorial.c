#include <stdio.h>

int fatorial(int n, int i);

int main(){
    int objetivo;

    printf("Digite o numero que deseja encontrar o fatorial: ");
    scanf("%d", &objetivo);

    printf("O fatorial de %d e: %d", objetivo, fatorial(objetivo, 1));
}
int fatorial(int n, int i){
    if(i>n)
        return 1;
    else{
        return i * fatorial(n,i+1);
    }
}
