#include <stdio.h>
#include <stdlib.h>

struct ST_Dados{
    char nome[40];
    float salario;
    //estrutra dentro de uma estrutura
    struct nascimento{
        int ano;
        int mes;
        int dia;
    } dt_nascimento;
};

int main(void){

    //ponteiro para a estrutura
    struct ST_Dados *p;

    //alocação de memória para o ponteiro da estrutura
    p = (struct ST_Dados *) malloc(sizeof(struct ST_Dados));

    //String (vetor de caracteres) é um ponteiro, por isso não é necessário usar o &
    printf("Informe o nome: ");
    scanf("%s", p->nome);

    printf("Informe o salario: R$ ");
    scanf("%f", &p->salario);

    /*
    O -> é chamado de pointer member (apontador de membro). Ele é usado para referenciar um campo da estrutura no lugar do ponto (.)
    */

    printf("Informe a data de nascimento: ");
    scanf("%d/%d/%d", &p->dt_nascimento.dia, 
                      &p->dt_nascimento.mes,
                      &p->dt_nascimento.ano);
    
    printf("\n===== Dados fornecidos =====");
    printf("\nNome: %s", p->nome);
    printf("\nSalario: R$ %.2f", p->salario);
    printf("\nData de nascimento: %d/%d/%d\n", p->dt_nascimento.dia,
                                               p->dt_nascimento.mes,
                                               p->dt_nascimento.ano);

    free(p);
}