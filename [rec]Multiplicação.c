#include <stdio.h>

int mult(int a, int b, int cont);

int main() {

    int num1, num2, contador=0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("%d", mult(num1,num2, contador));

}

int mult(int a, int b, int cont){
    if(cont == b){
        return 0;
    } else {
        cont ++;
        return a + mult(a,b,cont);
    }
}
