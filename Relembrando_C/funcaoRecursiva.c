#include <stdio.h>

int main(void)
{

    int fatorial(int x);
    int numero, resultado;

    printf("Informe um numero inteiro: ");
    scanf("%i", &numero);

    resultado = fatorial(numero);

    printf("Fatorial = %i\n", resultado);
}

int fatorial(int x)
{

    int resultado;

    if (x == 0)
    {
        resultado = 1;
    }

    else
    {
        resultado = x * fatorial(x - 1);
    }

    return resultado;
}
