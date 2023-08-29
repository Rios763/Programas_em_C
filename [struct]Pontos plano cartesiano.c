/*!
    Crie um novo tipo de registro para armazenar coordenadas no plano cartesiano.
    Crie uma função para imprimir um ponto do tipo criado.
    Crie uma função para cada uma destas operações: soma de dois pontos, subtração de dois pontos, multiplicação por um escalar.
*/

#include <stdio.h>
#include <string.h>

//Declaração do Struct e substituição de seu nome
typedef struct cordenadas{
    float x;
    float y;
} cordenadas ;

// Declaração de Funções
void imprimeCordenadas(cordenadas);
cordenadas leitura();
cordenadas somaCoordenada(cordenadas, cordenadas);
cordenadas subCoordenada(cordenadas c1, cordenadas c2);
cordenadas multCordenada1(cordenadas c1, int multiplicador);
cordenadas multCordenada2(cordenadas c2, int multiplicador);

int main()
{

    //Variáveis e structs
    cordenadas c1, c2, cSoma, cSub, cMult1, cMult2;
    int multiplicador = 1;

    //input ponto c1
    printf("Coordenada 1 \n");
    c1 = leitura();

    //input ponto c2
    printf("Coordenada 2 \n");
    c2 = leitura();

    //input numero multiplicador
    printf("Digite o multiplicador (numero inteiro): ");
    scanf("%d", &multiplicador);


    //chamada das funções
    printf("\n");
    printf("Coordenada do ponto 1: ");
    imprimeCordenadas(c1);
    printf("Coordenada do ponto 2: ");
    imprimeCordenadas(c2);

    printf("\n");
    cSoma = somaCoordenada(c1, c2);
    printf("Coordenadas somada: ");
    imprimeCordenadas(cSoma);

    printf("\n");
    cSub = subCoordenada(c1, c2);
    printf("Coordenadas subtraidas: ");
    imprimeCordenadas(cSub);

    printf("\n");
    cMult1 = multCordenada1(c1, multiplicador);
    printf("Coordenada 1 multiplicada por 2: ");
    imprimeCordenadas(cMult1);

    cMult2 = multCordenada2(c2, multiplicador);
    printf("Coordenada 2 multiplicada por 2: ");
    imprimeCordenadas(cMult2);


    return 0;
}

void imprimeCordenadas(cordenadas coord){
    printf("(%.1f, %.1f)\n", coord.x, coord.y);

}


cordenadas leitura(){
    cordenadas aux;

    printf("Digite o valor de x: ");
    scanf("%f", &aux.x);
    printf("Digite o valor de y: ");
    scanf("%f", &aux.y);

    return aux;
}

cordenadas somaCoordenada(cordenadas c1, cordenadas c2){
    cordenadas aux;

    aux.x = c1.x + c2.x;
    aux.y = c1.y + c2.y;

    return aux;

}

cordenadas subCoordenada(cordenadas c1, cordenadas c2){
    cordenadas aux;

    aux.x = c1.x - c2.x;
    aux.y = c1.y - c2.y;

    return aux;

}

cordenadas multCordenada1(cordenadas c1, int mult){
    cordenadas aux;

    aux.x = mult * c1.x;
    aux.y = mult * c1.y;

    return aux;
}

cordenadas multCordenada2(cordenadas c2, int mult){
    cordenadas aux;

    aux.x = mult * c2.x;
    aux.y = mult * c2.y;

    return aux;
}

