#include <stdio.h>

int main(void){

    struct horario{
        int horas;
        int minutos;
        int segundos;

    }; //agora = {15, 17, 30}; Também é possível definir uma estrutura dessa forma

    struct horario agora;
    //Estrutura nomeada "agora" do tipo horario

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

}