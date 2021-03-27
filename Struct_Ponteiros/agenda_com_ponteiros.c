#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*
Typedef permite denifir um novo nome para um determinado tipo.

A estrutura é: typedef antigo_nome novo_nome;
*/

typedef struct agenda{

    char nome[40];
    char email[40];
    int telefone;
} AGENDA;


//funções para serem implementadas

void aloca(AGENDA **pAgenda, int *piEntradas);

void consulta(AGENDA *pAgenda, int iEntradas);

void qs_ordena(AGENDA pAgenda[], int left, int right);

void ordena(AGENDA pAgenda[], int iEntradas);

void excluir(AGENDA **pAgenda, int *piEntradas);

void pesquisar(AGENDA *pAgenda, int iEntradas);

void alterar(AGENDA *pAgenda, int iEntradas);

int main(void){

    AGENDA *pAgenda;

    int iEntradas = 0, op;

    //Alocando espaço para a posição 0 do vetor
    pAgenda = (AGENDA *) malloc(sizeof(AGENDA));

    if(pAgenda == NULL){
        printf("Erro na alocacao de memoria!");
        exit(1);
    }

    do{
        fflush(stdin);
        printf("\n1 - Inclusao");
        printf("\n2 - Alteracao");
        printf("\n3 - Consulta");
        printf("\n4 - Excluir");
        printf("\n5 - Pesquisar");
        printf("\n0 - Sair");

        printf("Ola, qual opcao voce deseja realizar?\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            
            fflush(stdin);

            aloca(&pAgenda, &iEntradas);

            printf("*** Inclusao ***");
            printf("\nInforme o nome: ");

            /* forma 1 - endereço ponteiro inicial + x posições na memória. Quando se utiliza endereço, deve-se usar ->*/
            gets((pAgenda + iEntradas)->nome);
            fflush(stdin);

            printf("\nInforme o e-mail: ");

            /* forma 2 - endereço ponteiro inicial + x posições na memória. Quando se trabalhar com ponteiro (conteúdo do endereço ou *), deve-se usar o . (ponto)*/
            gets((*(pAgenda + iEntradas)).email);
            fflush(stdin);

            printf("\nInforme o telefone: ");

            // forma 3 - Trabalhando com vetor
            scanf("%d", &pAgenda[iEntradas].telefone);
            fflush(stdin);

            iEntradas++;

            break;
        
        case 2:

            alterar(pAgenda, iEntradas);
            break;

        case 3:

            /*Se o vetor de estruturas vai ser somente lido, não é preciso passar ponteiro para ponteiro*/
            ordena(pAgenda, iEntradas);
            consulta(pAgenda, iEntradas);
            break;

        case 4:

            ordena(pAgenda, iEntradas);
            excluir(&pAgenda, &iEntradas);
            break;

        case 5:

            ordena(pAgenda, iEntradas);
            pesquisar(pAgenda, iEntradas);
            break;

        default:

            printf("Opcao invalida!");

        }

    }while(op != 0);

}

void consulta(AGENDA *pAgenda, int iEntradas){

    for(int i = 0; i < iEntradas; i++){

        printf("\n\nRegistro [%d]", i+1);
        printf("\nNome: %s", pAgenda[i].nome);
        printf("\nE-mail: %s", pAgenda[i].email);
        printf("\nTelefone: %d", pAgenda[i].telefone);
        getch();
    }
}

void alterar(AGENDA *pAgenda, int iEntradas){

    char op;
    int i = 0;
    char nome[40];

    printf("\nInforme o nome: ");
    fflush(stdin);
    gets(nome);

    for(i = 0; i < iEntradas && strncmp(pAgenda[i].nome, nome, strlen(nome)) != 0; i++);

    if(i >= iEntradas){
        printf("\nRegistro nao encontrado");
    }else{

        printf("\n\nRegistro [%d]", i+1);
        printf("\nNome: %s", pAgenda[i].nome);
        printf("\nE-mail: %s", pAgenda[i].email);
        printf("\nTelefone: %d", pAgenda[i].telefone);
        printf("\nConfirma a alteracao?");
        op = getch();
        if(op == 'S' || op == 's'){

            fflush(stdin);
            printf("\nInforme o nome: ");

            /* forma 1 - endereço ponteiro inicial + x posições na memória. Quando se utiliza endereço, deve-se usar ->*/
            gets((pAgenda + i)->nome);
            fflush(stdin);

            printf("\nInforme o e-mail: ");

            /* forma 2 - endereço ponteiro inicial + x posições na memória. Quando se trabalhar com ponteiro (conteúdo do endereço ou *), deve-se usar o . (ponto)*/
            gets((*(pAgenda + i)).email);
            fflush(stdin);

            printf("\nInforme o telefone: ");

            // forma 3 - Trabalhando com vetor
            scanf("%d", &pAgenda[i].telefone);
            fflush(stdin);

        }
    }
}

void excluir(AGENDA **pAgenda, int *piEntradas){

    char op;
    int i = 0;
    char nome[40];

    printf("\nInforme o nome: ");
    fflush(stdin);
    gets(nome);

    /*Utiliza-se a sintaxe (*pAgenda)[i].nome pelo fato de ser ponteiro de ponteiro. Os parenteses neste caso servem para "fixar" a primeira posição da memória, pois a linguagem C tende a trabalhar com ponteiros de ponteiros como se fossem matrizes (que na prática são ponteiros para ponteiros*/

    for(i = 0; i < *piEntradas && strncmp((*pAgenda)[i].nome, nome, strlen(nome)) != 0; i++);

    if(i >= *piEntradas){
        printf("\nRegistro nao encontrado");
    }else{

        printf("\n\nRegistro [%d]", i+1);
        printf("\nNome: %s", (*pAgenda)[i].nome);
        printf("\nE-mail: %s", (*pAgenda)[i].email);
        printf("\nTelefone: %d", (*pAgenda)[i].telefone);
        printf("\nConfirma a exclusao?");
        op = getch();

        if(op == 'S' || op == 's'){

            //copia o último elemento para o elemento corrente
            (*pAgenda)[i] = (*pAgenda)[(*piEntradas) - 1];
            (*piEntradas)--;
            //excluo o último elemento com realoc
            aloca(pAgenda, piEntradas);
        }
    }
}

void aloca(AGENDA **pAgenda, int *piEntradas){

    (*pAgenda) = (AGENDA *)(realloc(*pAgenda, (*piEntradas + 1) *sizeof(AGENDA)));

    if(*pAgenda == NULL){
        
        printf("Erro na alocacao de memoria!");
        exit(1);
    }
}

void pesquisar(AGENDA *pAgenda, int iEntradas){

    char op;
    int i = 0;
    char nome[40];

    printf("\nInforme o nome: ");
    fflush(stdin);
    gets(nome);

    
    for(i = 0; i < iEntradas && strncmp((pAgenda)[i].nome, nome, strlen(nome)) != 0; i++);

    if(i >= iEntradas){
        printf("\nRegistro nao encontrado");
    }else{

        do{

            printf("\n\nRegistro [%d]", i+1);
            printf("\nNome: %s", (pAgenda)[i].nome);
            printf("\nE-mail: %s", (pAgenda)[i].email);
            printf("\nTelefone: %d", (pAgenda)[i].telefone);
            printf("\nProximo?");
            op = getch();
            i++;

            if(i >= iEntradas){
                i = 0;
            }

        } while(op == 'S' || op == 's');

    }
    
}

