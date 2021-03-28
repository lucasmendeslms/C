#include <stdio.h>

int main(void){

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    depois = &agora;

    /*
    (*depois).hora = 20;
    (*depois).minuto = 20;
    (*depois).segundo = 20;
    */

    depois -> hora = 20;
    depois -> minuto = 20;
    depois -> segundo = 20;

    printf("Com ponteiros: %i:%i:%i\n", *depois);
    printf("Sem ponteiros: %i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);



}