/*!
    Crie um novo tipo de registro para armazenar coordenadas no plano cartesiano.
    Crie uma funç˜ao para imprimir um ponto do tipo criado.
    Crie uma funç˜ao para cada uma destas operaç˜oes: soma de dois pontos, subtraç˜ao de dois pontos, multiplicaç˜ao por um escalar.
*/

#include <stdio.h>
#include <string.h>

typedef struct cordenadas{
    float x;
    float y;
} cordenadas ;


void imprimeCordenadas(cordenadas);
cordenadas leitura();
cordenadas somaCoordenada(cordenadas, cordenadas);

int main()
{

    cordenadas c1, c2, cSoma;
    int i=0;

    printf("Coordenada 1 \n");
    c1 = leitura();

    printf("Coordenada 2 \n");
    c2 = leitura();

    imprimeCordenadas(c1);
    imprimeCordenadas(c2);

    cSoma = somaCoordenada(c1, c2);
    printf("Coordenada somada: ");
    imprimeCordenadas(cSoma);


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
