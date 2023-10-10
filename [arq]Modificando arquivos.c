#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    char aux, nomeArq[100], modifica[1000];
    FILE *arq;
    int i=0, tam;

    //Escolher arquivo
    printf("Entre com o nome do arquivo: ");
    scanf("%s", nomeArq);

    arq = fopen(nomeArq, "r+"); //Definição de leitura do arquivo

    if (arq == NULL) //Verificação de existência
        printf("Erro ao abrir o arquivo");
    else{

        while(fscanf(arq, "%c", &modifica[i]) != EOF){ //Salvando dados em um vetor
            i++;
        }
        tam = i; //Captação do tamanho do arquivo
        rewind(arq); //Voltando cursor para o começo do arquivo

        //Printar o vetor na tela
        printf("Valores do arquivo: ");
        for(i=0; i<tam; i++)
            printf("%c", modifica[i]);
        printf("\n");

        //Modificação do vetor
        for(i=0; i<tam; i++){
            if(modifica[i] == 'a')
                modifica[i] = 'A';
        }

        //Printar o vetor modificado
        printf("Valores modificados: ");
        for(i=0; i<tam; i++)
            printf("%c", modifica[i]);
        printf("\n");

        //Adicionando modificações no arquivo
        for(i=0; i<tam ; i++){
            fprintf(arq, "%c", modifica[i]);
        }

        fclose(arq);

    }
    return 0;
}
