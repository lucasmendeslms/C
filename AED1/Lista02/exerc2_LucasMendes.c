#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define MAX 50
#define true 1
#define false 0
 
typedef int TIPOCHAVE;
typedef int bool;
 
typedef struct{
    
    TIPOCHAVE chave;
} REGISTRO;
 
typedef struct{
 
    REGISTRO A[MAX];
    int numeroElemento;
} LISTA;
 
 
void inicializarLista(LISTA *l);
 
int tamanho(LISTA *l);
 
void exibirLista(LISTA *l);
 
int buscaSequencial(LISTA *l, TIPOCHAVE ch);
 
bool inserirElemLista(LISTA *l, REGISTRO reg, int i);
 
bool excluirElemLista(LISTA *l, TIPOCHAVE ch);
 
void reinicializarLista(LISTA *l);
 
 
 
int Insercao(LISTA *li, REGISTRO p, REGISTRO e);
 
void Contagem(LISTA *li, REGISTRO elema, REGISTRO elemb);
 
void MostraLista(LISTA *li);
 
int Remocao(LISTA *li, TIPOCHAVE ch);
 
int main()
{
    LISTA lista;
    inicializarLista(&lista);
 
    TIPOCHAVE ch, chp, che;
    REGISTRO dado, p, e;
    char operacao;
    int n, i;
 
    //printf("Informe o numero de inimigos inicialmente na lista: ");
    scanf("%d", &n);
    while ((n < 1) || (n > 1000))
    {
        scanf("%d", &n);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ch);
        dado.chave = ch;
        inserirElemLista(&lista, dado, i);
    }
 
    do{
 
        //printf("\nInforme a operacao que deseja realizar: ");
        fflush(stdin);
        scanf("%c", &operacao);
 
        
        if(operacao == 'I'){
                
            scanf("%i%i", &p, &e);
            Insercao(&lista, p, e);
        }
        if(operacao == 'C'){
 
            scanf("%i%i", &p, &e);
            Contagem(&lista, p, e);
        
        }
        if(operacao == 'M'){
 
            MostraLista(&lista);
        }
        if(operacao == 'R'){
 
            scanf("%i", &p);
            Remocao(&lista, p.chave);
        
        }
        if(operacao == 'F'){
 
            printf("fim");
            break;
        }
    }while(1);
 
    reinicializarLista(&lista);
 
}
 
void inicializarLista(LISTA *l)
{
    l->numeroElemento = 0;
} 
 
int tamanho(LISTA *l)
{
    return l->numeroElemento;
 
}
 
void exibirLista(LISTA *l)
{
    int i;
    for (i = 0; i < l->numeroElemento; i++)
        printf("%i ", l->A[i].chave);
}
 
int buscaSequencial(LISTA *l, TIPOCHAVE ch)
{
    int i = 0;
    while (i < l->numeroElemento){
        if(ch == l->A[i].chave){
            return i;
        } else{
            i++;
        } 
        
    }
    return -1;
 
}
 
bool inserirElemLista(LISTA *l, REGISTRO reg, int i)
{
    int j;
    if ((l->numeroElemento == MAX) || (i < 0) || (i > l->numeroElemento))
    {
        return false;
    }
    for (j = l->numeroElemento; j > i; j--) l->A[j] = l->A[j-1];
    l->A[i] = reg;
    l->numeroElemento++;
    return true;
}
 
bool excluirElemLista(LISTA *l, TIPOCHAVE ch)
{
    int pos, j;
    pos = buscaSequencial(l,ch);
    if(pos == -1){
        return false;
    } 
    for(j = pos; j < l->numeroElemento-1; j++){
        l->A[j] = l->A[j+1];
    }
    l->numeroElemento--;
    return true;
 
}
 
void reinicializarLista(LISTA *l)
{
   l->numeroElemento = 0;
}
 
int Insercao(LISTA *li, REGISTRO p, REGISTRO e)
{
    int pos;
    bool inserido;
 
    if (li == NULL){
        return false;
    }
    pos = buscaSequencial(li, e.chave);
    inserido = inserirElemLista(li, p, pos + 1);
 
    if (inserido == true)
    {
        printf("inserido %i\n", p.chave);
        return true;
    }
    else
    {
        return false;
    }
}
 
void Contagem(LISTA *li, REGISTRO elema, REGISTRO elemb)
{
    int a, b, distancia;
    a = buscaSequencial(li, elema.chave);
    b = buscaSequencial(li, elemb.chave);
 
    if (a > b)
 
    {
        distancia = a - b - 1;
    }
    else
    {
        if (b > a)
        {
            distancia = b - a - 1;
        }
        else
        {
            if (b == a)
            {
                distancia = -1;
            }
        }
    }
    printf("quantidade %i\n", distancia);
}
 
void MostraLista(LISTA *li)
{
    printf("lista ");
    exibirLista(li);
    printf("\n");
}
 
int Remocao(LISTA *li, TIPOCHAVE ch)
{
    bool excluido;
 
    excluido = excluirElemLista(li, ch);
    if (excluido == true)
        printf("removido %i\n", ch);
}