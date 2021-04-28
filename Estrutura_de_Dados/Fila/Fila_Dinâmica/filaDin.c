#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
    int dado;
    struct NO *prox;
}NO;

typedef struct FILA{
    NO *inicio;
    NO *fim;
}FILA;

int main(void){

    FILA *f1 = (FILA*) malloc(sizeof(FILA));
    if(f1 == NULL){
        printf("Erro de alocação.\n");
        exit(-1);
    } else{

        inicializarFila(f1);

        inserirFila(10, f1);
        inserirFila(20, f1);
        inserirFila(30, f1);

        imprimeFila(f1);

        printf("\n__________________________");

        printf("\nTentando desenfileirar - Resultado: %d\n", removerFila(f1));
        printf("Itens na fila: ");
        imprimeFila(f1);

        printf("\nTentando desenfileirar - Resultado: %d\n", removerFila(f1));
        printf("Itens na fila: ");
        imprimeFila(f1);

        printf("\nTentando desenfileirar - Resultado: %d\n", removerFila(f1));
        printf("Itens na fila: ");
        imprimeFila(f1);

    }
}

void inicializarFila(FILA *f){

    f->inicio = NULL;
    f->fim = NULL;
}

void inserirFila(int dado, FILA *f){

    NO *ponteiro = (NO*) malloc(sizeof(NO));
    if(ponteiro == NULL){
        printf("Erro na alocação\n");
        return;
    } else{
        ponteiro->dado = dado;
        ponteiro->prox = NULL;
        if(f->inicio == NULL){
            f->inicio = ponteiro;
        } else{
            f->fim->prox = ponteiro;
        }
        f->fim = ponteiro;
    }
}


int removerFila(FILA *f){

    NO *ponteiro = f->inicio;
    int dado;

    if(ponteiro != NULL){
        f->inicio = ponteiro->prox;
        ponteiro->prox = NULL;
        dado = ponteiro->dado;
        free(ponteiro);
        if(f->inicio == NULL){
            f->fim = NULL;
        }
        return dado;
    } else{
        printf("Fila vazia.\n");
        return -1;
    }
}

void imprimeFila(FILA *f){

    NO *ponteiro = f->inicio;
    if(ponteiro != NULL){
        while(ponteiro != NULL){
            printf("%d ", ponteiro->dado);
            ponteiro = ponteiro->prox;
        }
        printf("\n");

    } else{
        printf("\nFila vazia.\n");
    }
}