#include <stdio.h>

int main(void){

    struct horario{
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    } hoje;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("Hora: %i\n", *hoje.pHora);
    printf("Hora: %i\n", *hoje.pMinuto);
    printf("Hora: %i\n", *hoje.pSegundo);

    *hoje.pSegundo = 1000;

    printf("Segundo: %i\n", *hoje.pSegundo);

}