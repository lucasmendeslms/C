#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct NO
{
    int dado;
    struct NO *prox;
} NO;

typedef struct LISTA
{
    NO *inicio;
    NO *fim;
} LISTA;

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    LISTA *lista = (LISTA*) malloc(sizeof(LISTA));
    int dado;

    if(lista == NULL){
        printf("Erro de alocação.\n");
        exit(-1);
    } else{
        
        inicializarLista(lista);

        insereNoInicio(10, lista);
        insereNoInicio(754, lista);
        insereNoFim(1, lista);
        imprimirLista(lista);

        insereNoInicio(27, lista);
        insereNoFim(888, lista);
        imprimirLista(lista);

        removeDoInicio(lista);
        imprimirLista(lista);


        removeDoInicio(lista);
    }

}

void inicializarLista(LISTA *lista){
    lista->inicio = NULL;
    lista->fim = NULL;
}

void insereNoInicio(int elemento, LISTA *lista)
{

    NO *ponteiro = (NO *)malloc(sizeof(NO));
    if (ponteiro == NULL)
    {
        printf("Erro\n");
    }

    ponteiro->dado = elemento;
    ponteiro->prox = NULL;

    if (lista->inicio == NULL)
    {

        lista->fim = ponteiro;
    }
    else
    {
        ponteiro->prox = lista->inicio;
    }

    lista->inicio = ponteiro;
}

void insereNoFim(int elemento, LISTA *lista){

    NO *ponteiro = (NO*) malloc(sizeof(NO));
    if (ponteiro == NULL)
    {
        printf("Erro\n");
    }

    ponteiro->dado = elemento;
    ponteiro->prox = NULL;

    if(lista->inicio == NULL){
        lista->inicio = ponteiro;
        lista->fim = ponteiro;
    } else{
        lista->fim->prox = ponteiro;
    }
    lista->fim = ponteiro;
}

void imprimirLista(LISTA *lista){

    NO *ponteiro = lista->inicio;
    printf("Inicio -> ");
    while(ponteiro != NULL){
        printf("%d ", ponteiro->dado);
        ponteiro = ponteiro->prox;
    }
    printf("<- Fim\n\n");
}

int removeDoInicio(LISTA *lista){
    
    NO *ponteiro = lista->inicio;
    int elemento;
    if(ponteiro == NULL){
        printf("Lista vazia\n");
        //return -1;
    } else{
        lista->inicio = lista->inicio->prox;
        ponteiro->prox = NULL;
        elemento = ponteiro->dado;
        free(ponteiro);
        return elemento;
    }
}