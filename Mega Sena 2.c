/*
Enunciado:
Um jogador da Mega-Sena é supersticioso, e só faz jogos em que o primeiro número do jogo é par, o segundo é ímpar, o terceiro
é par, o quarto é ímpar, o quinto é par e o sexto é ímpar. Faça um programa que imprima todas as possibilidades de jogos
que este jogador supersticioso pode jogar.

*/

#include <stdio.h>

int main(){


int d1, d2, d3, d4, d5, d6;

for(d1=1; d1<=60; d1++){
    if(d1%2 == 0){
        for(d2= d1 + 1; d2<=60; d2++){
            if(d2%2 == 1){
                for(d3= d2 + 1; d3<=60; d3++){
                    if(d3%2 == 0){
                        for(d4= d3 + 1; d4<=60; d4++){
                            if(d4%2 == 1){
                                for(d5= d4 + 1; d5<=60; d5++){
                                    if(d5%2 == 0){
                                        for(d6= d5 + 1; d6<=60; d6++){
                                            if(d6%2 == 1){
                                                printf("%d %d %d %d %d %d \n", d1, d2, d3,d4, d5, d6);
                                            }
                                        }   
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
}
