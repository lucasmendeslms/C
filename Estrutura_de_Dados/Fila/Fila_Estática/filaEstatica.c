/*
- Em uma fila os elementos são inseridos no final da fila e retirados no início da fila
- Só é possível consultar o elemento que está no início da fila
*/

#include <filaEstatica.h>
#include <stdio.h>

struct fila{
    int inicio, final, qtd;
    struct aluno dados[MAX];
};

int main (void){

    Aluno dados_aluno;
    Fila *fi;

    //Chama a função para criar a fila
    fi = cria_fila();

    //Função para liberar a fila
    libera_Fila(fi);

    //Função para informar a quantidade de itens na fila
    int x = tamanho_Fila(fi);

    //Função que informa se a fila está cheia
    int x = Fila_cheia(fi);
    /* Também é possível chamar ela por meio de uma condição
    if(Fila_cheia(fi)) ... */

    //Função que informa se a fila está vazia
    int x = Fila_vazia(fi);
    /* Também é possível chamar ela por meio de uma condição
    if(Fila_vazia(fi)) ... */

    //Função que insere elementos na fila
    int x = insere_Fila(fi, dados_aluno);

    //Função que remove o primeiro elemento da fila
    int x = remove_Fila(fi);

    //Função que consulta o primeiro elemento da fila
    int x = consulta_Fila(fi, &dados_aluno);
}

Fila* cria_Fila(){

    Fila *fi = (Fila*) malloc(sizeof(struct fila));
    if(fi != NULL){
        fi->inicio = 0;
        fi->final = 0;
        fi->qtd = 0;
    }

    return fi;
}

void libera_Fila(Fila* fi){
    free(fi);
}

int tamanho_Fila(Fila* fi){

    if(fi == NULL){
        return -1;
    }

    return fi->qtd;
}

int Fila_cheia(Fila* fi){

    if(fi == NULL){
        return -1;
    }

    if(fi->qtd == MAX){
        return 1;
    }

    else{
        return 0;
    }
}

int Fila_vazia(Fila* fi){

    if(fi == NULL){
        return -1;
    }

    if(fi->qtd == 0){
        return 1;
    }

    else{
        return 0;
    }
}

int insere_Fila(Fila* fi, struct aluno al){

    if( fi == NULL){
        return 0;
    }

    if(Fila_cheia(fi)){
        return 0;
    }

    fi->dados[fi->final] = al;
    fi->final = (fi->final+1)%MAX;
    fi->qtd++;
    return 1;
}

int remove_Fila(Fila* fi){

    if(fi == NULL || Fila_vazia(fi)){
        return 0;
    }

    fi->inicio = (fi->inicio+1)%MAX;
    /* 
    fi->inicio = (fi->inicio+1)%MAX; é equivalente a: 

    fi->inicio = (fi->inicio++)
    if(fi->inicio == MAX){
        fi->inicio = 0;
    }    
    */

    fi->qtd--;
    return 1;
}

int consulta_Fila(Fila* fi, struct aluno *al){

    if(fi == NULL || Fila_vazia(fi)){
        return 0;
    }

    *al = fi->dados[fi->inicio];
    return 1;
}