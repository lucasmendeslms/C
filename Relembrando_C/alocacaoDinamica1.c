/*
    void * malloc(int tamanho);
    void * calloc(int numeroElementos, int tamanhoElemento);
    void * realloc(void *areaAlocada, int novoTamanho);
    free(void * areaAlocada);

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *p;
    int i, k, n;

    printf("Informe a quantidade de numeros a serem digitados: ");
    scanf("%d", &i);

    /*
    Utilizando a função malloc para reservar espaço para um vetor de inteiros. Serão reservados i * a quantidade de bytes que o tipo da variável ocupa, esse tipo é obtido usando a função sizeof()
    */

   p = (int *)(malloc(i * sizeof(int)));

   if(p == NULL){
       printf("\nErro de alocacao de memoria\n");
       exit(1);
   }

   for(k = 0; k < i; k++){
       printf("Informe o numero a ser inserido no indice [%d]: ", k+1);
       scanf("%d", &p[k]);
   }

   printf("Quer aumentar ou diminuir o tamanho? Informe quantos elementos quer adicionar ao vetor: \n");
   scanf("%d", &n);

   /*Utilizando a função realloc para aumentar ou diminuir o tamanho de um vetor dinamicamente. A função recebe o ponteiro para o vetor anterior e retorna o novo espaço alocado*/

   p = (int *)(realloc(p, (i+n) * sizeof(int)));

   if(p == NULL){
       printf("Erro de re-alocacao de memoria\n");
       exit(1);
   }

   for(k = 0; k < (n + i); k++){
       printf("Informe o numero a ser inserido no indice [%d]: ", k+1);
       scanf("%d", &p[k]);
   }

   for(k = 0; k < (i + n); k++){
       printf("Numero presente no indice [%d] = %d\n", k+1, p[k]);
   }

   free(p);

}