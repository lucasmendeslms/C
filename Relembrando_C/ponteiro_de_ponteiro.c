#include <stdio.h>
#include <stdlib.h>

int funcao(int **piParametro){

    printf("Endereco de piParametro: %d", &piParametro);
    printf("Conteudo de piParametro: %d\n", piParametro);
    printf("Conteudo do endereco apontado por piParametro (piVariavel): %d\n", *piParametro);
    printf("Valor do endereco apontado por piParametro (*piVariavel): %d\n", **piParametro);
    return 0;

}

int main(void){
    
    int *piVariavel;
    *piVariavel = (int *) malloc(sizeof(int));
    *piVariavel = 20;

    printf("Endereco de piVariavel: %d\n", &piVariavel);
    printf("Endereco de piVariavel sem o &: %d\n", piVariavel);
    printf("Valor do ponteiro piVariavel: %d\n", *piVariavel);

    funcao(&piVariavel);

}

