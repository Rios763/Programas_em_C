#include <stdio.h>
#include <string.h>


typedef struct produto
{
    char nome[80];
    double preco;
    int quantidade;
}produto;

void ordenaPreco(produto vet1[], int n);
void ordenaQuant(produto vet2[], int n);
void leitura(produto[], int);
void prints(produto[], int);

int main(){

    produto itens[5];

   
    leitura(itens, 5);
    printf("\nOrdem digitada:\n");
    prints(itens, 5);
    ordenaPreco(itens, 5);
    printf("\nOrdenado por preco:\n");
    prints(itens, 5);
    ordenaQuant(itens, 5);
    printf("\nOrdenado por quantidade:\n");
    prints(itens, 5);
    

    return 0;
}

void leitura(produto e[], int n){
    for(int i=0; i<n; i++){
            printf("Digite o nome do produto %d:\n ", i+1);
            scanf("%s", e[i].nome);
            printf("Digite o preco do produto %d:\n ", i+1);
            scanf("%lf", &e[i].preco);
            printf("Digite a quantidade do produto %d:\n ", i+1);
            scanf("%d", &e[i].quantidade);
    }
}

void ordenaPreco(produto vet1[], int n){
   char auxNome[80];
   double auxPreco;
   int auxQuant;
   int verificador =0;

   while(verificador ==0){

        for(int i=0; i<n-1; i++){
            if(vet1[i].preco > vet1[i+1].preco){
                strcpy(auxNome, vet1[i].nome);
                auxPreco = vet1[i].preco;
                auxQuant = vet1[i].quantidade;

                strcpy(vet1[i].nome, vet1[i+1].nome);
                vet1[i].preco = vet1[i+1].preco;
                vet1[i].quantidade = vet1[i+1].quantidade;

                strcpy(vet1[i+1].nome, auxNome);
                vet1[i+1].preco = auxPreco;
                vet1[i+1].quantidade = auxQuant;
            }
        }

        for(int i=0;i<n-1; i++){
            if(vet1[i].preco <=vet1[i+1].preco)
                verificador = 1;

            else{
                verificador =0;
                break;
            }
        }
    }
}

void ordenaQuant(produto vet2[], int n){
    char auxNome[80];
   double auxPreco;
   int auxQuant;
   int verificador =0;

   while(verificador ==0){

        for(int i=0; i<n-1; i++){
            if(vet2[i].quantidade > vet2[i+1].quantidade){
                strcpy(auxNome, vet2[i].nome);
                auxPreco = vet2[i].preco;
                auxQuant = vet2[i].quantidade;

                strcpy(vet2[i].nome, vet2[i+1].nome);
                vet2[i].preco = vet2[i+1].preco;
                vet2[i].quantidade = vet2[i+1].quantidade;

                strcpy(vet2[i+1].nome, auxNome);
                vet2[i+1].preco = auxPreco;
                vet2[i+1].quantidade = auxQuant;
            }
        }

        for(int i=0;i<n-1; i++){
            if(vet2[i].quantidade <=vet2[i+1].quantidade)
                verificador = 1;

            else{
                verificador =0;
                break;
            }
        }
    }

}

void prints(produto a[], int tam){
    for(int i=0; i<tam; i++){
        printf("\nProduto %d:\n", i+1);
        printf("Nome: %s\n", a[i].nome);
        printf("Preco: %.2lf\n", a[i].preco);
        printf("Quantidade: %d\n", a[i].quantidade);
    }
}
