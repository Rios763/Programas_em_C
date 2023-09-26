#include <stdio.h>
#include <stdlib.h>

int amigos(int a, int b);

int main()
{
    int num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resultado = amigos(num1,num2);

    if(resultado == 1)
        printf("Parabens, esses numero sao amiguinhos!! :)");
    else if(resultado==0)
        printf("Esses numeros nao sao amigos :(");


    return 0;
}

int amigos(int a, int b){
    int i, j=0, k=0, soma1=0, soma2=0 ,  primeiro[100], segundo[100];

    for(i=2;i<=a;i++){
        if((a%i)==0){
            primeiro[j] = a/i;
            j++;
        }
    }

       for(i=2;i<=b;i++){
        if((b%i)==0){
            segundo[k] = b/i;
            k++;
        }
    }

    for(i=0;i<j;i++)
        soma1 += primeiro[i];

    for(i=0;i<k;i++)
        soma2 += segundo[i];

    if((soma1==b) && (soma2==a))
        return 1;
    else return 0;

}
