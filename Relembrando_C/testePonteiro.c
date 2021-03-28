#include <stdio.h>

void soma(int, int, int *);


int main(void){

    int valorA = 5;
    int valorB = 3;
    int *valor;
    int resultadoV;

    valor = &valorA;

    printf("Endereco de valorA = %d\n", &valorA);
    printf("Endereco do ponteiro valor = %d\n", valor);
    printf("Valor da variavel valorA = %d\n", valorA);
    printf("Valor do ponteiro valor = %d\n", *valor);

    printf("O endereco de resultadoV = %d\n", &resultadoV);

    soma(valorA, valorB, &resultadoV);

    valor++;
    printf("Endereco do ponteiro valor = %d\n", valor);
    printf("Valor do ponteiro valor = %d\n", *valor);



}

void soma(int valueA, int valueB, int *resultado){

    printf("Endereco do ponteiro resultado = %d\n", resultado);

    *resultado = valueA + valueB;

    printf("O valor do ponteiro resultado = %d\n", *resultado);


    return;
}