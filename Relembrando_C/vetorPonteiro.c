#include <stdio.h>

void imprime_array_elemento(int *, int);

int main(void)
{

    int vetor[10] = {1, 7, 3, 4, 5, 6, 16, 8, 9, 10};

    imprime_array_elemento(&vetor, 10);
    imprime_array_elemento(&vetor, 2);
}

void imprime_array_elemento(int *aArray, int iElemento)
{

    int i = 0;

    while(aArray[i] != iElemento){ i++; }
    
        if (aArray[i] == iElemento)
        {
            printf("O elemento %d pertence a posicao de numero [%d] no vetor\n", aArray[i], i);
        }
    
}
