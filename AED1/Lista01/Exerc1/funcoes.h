#include <stdio.h>
#include <limits.h>

typedef struct conjunto Conjunto;

#define LONG_MIN (1)
#define LONG_MAX (1000000)



int criaConjunto(int C); //1

int conjuntoVazio(int C); //2

int insereElementoConjunto(int x, Conjunto C); //3

int excluirElementoConjunto(int x, Conjunto C); //4

int tamanhoConjunto(Conjunto C); //5

int maior(int x, Conjunto C); //6

int menor(int x, Conjunto C); //7

int pertenceConjunto(int, Conjunto C); //8

int conjuntosIdenticos(Conjunto C1, Conjunto C2); //9

int subConjunto(Conjunto C1, Conjunto C2); //10

Conjunto complemento(Conjunto C1, Conjunto C2); //11

Conjunto uniao(Conjunto C1, Conjunto C2); //12

Conjunto interseccao(Conjunto C1, Conjunto C2); //13

Conjunto diferenca(Conjunto C1, Conjunto C2); //14

Conjunto conjuntoPartes(Conjunto C); //15

void mostraConjunto(Conjunto C, int ordem); //16

int copiarConjunto(Conjunto C1, Conjunto C2); //17

int destroiConjunto(Conjunto C);




