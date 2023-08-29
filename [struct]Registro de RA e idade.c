/*!
    Faça um registro para armazenar a idade e o RA;
    Faça a leitura de 5 alunos em uma função
    Calcule e imprima a media de idades

*/

#include <stdio.h>
#include <string.h>

typedef struct Aluno{
    int ra;
    int idade;
} Aluno ;

void leitura(Aluno[], int);

int main()
{

    Aluno estudantes[5];
    int i=0;
    float mediaIdade = 0;

    leitura(estudantes, 5);

    for(i=0; i<5; i++){
        printf("%d - RA: %d \t Idade: %d \n", i+1, estudantes[i].ra, estudantes[i].idade);
        mediaIdade = mediaIdade + estudantes[i].idade;
    }

    mediaIdade = mediaIdade / 5;
    printf("Media das idades: %.1f", mediaIdade);
    return 0;
}


void leitura(Aluno e[], int t){

    for(int i=0;i<t;i++){
        printf("Digite o RA do Aluno %d: ", i+1);
        scanf("%d", &e[i].ra);
        printf("Digite a idade do Aluno %d: ", i+1);
        scanf("%d", &e[i].idade);
    }
}
