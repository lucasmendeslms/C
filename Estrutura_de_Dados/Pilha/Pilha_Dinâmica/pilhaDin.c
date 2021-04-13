//A inserção , a remoção e a consulta sempre ocorrem no início

#include <stdio.h>
#include <pilhaDin.h>

struct elemento{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

int main(void){

    Pilha *pi;
    Aluno dados_aluno;

    pi = cria_Pilha();

    libera_Pilha(pi);

    int x = tamanho_Pilha(pi);

    int x = Pilha_cheia(pi);

    int x = Pilha_vazia(pi);

    int x = insere_Pilha(pi, dados_aluno);

    int x = remove_Pilha(pi);

    int x = consulta_topo_Pilha(pi, &dados_aluno);
}

Pilha *cria_Pilha(){

    Pilha *pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL){
        *pi = NULL;
    }
    return pi;
}

void libera_Pilha(Pilha *pi){

    if(pi != NULL){
        Elem *no;
        while((*pi) != NULL){
            no = *pi;
            *pi = (*pi)->prox;
            free(no);
        }
        free(pi);
    }
}

int tamanho_Pilha(Pilha *pi){

    if(pi == NULL){
        return 0;
    }

    int cont = 0;
    Elem *no = *pi;
    while(no != NULL){
        cont++;
        no = no->prox;
    }

    return cont;
}

int Pilha_cheia(Pilha *pi){
    return 0;

    //A pilha não fica cheia, a não ser que falte memória. Como é uma pilha dinâmica, a capacidade aumenta conforme o uso.
}

int Pilha_vazia(Pilha *pi){

    if(pi == NULL){
        return 1;
    }
    if(*pi == NULL){
        return 1;
    }

    return 0;
}

int insere_Pilha(Pilha *pi, struct aluno al){

    if(pi == NULL){
        return 0;
    }
    
    Elem *no = (Elem*) malloc(sizeof(Elem));

    if(no == NULL){
        return 0;
    }

    no->dados = al;
    no->prox = (*pi);
    *pi = no;
    return 1;
}

int remove_Pilha(Pilha *pi){

    if(pi == NULL){
        return 0;
    }
    if((*pi) == NULL){
        return 0;
    }

    Elem *no = *pi;
    *pi = no->prox;
    free(no);
    return 1;
}

int consulta_topo_Pilha(Pilha *pi, struct aluno *al){

    if(pi == NULL){
        return 0;
    }
    if((*pi) == NULL){
        return 0;
    }

    *al = (*pi)->dados;
    return 1;

}