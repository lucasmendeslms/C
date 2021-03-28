#include <stdio.h>

struct horario
{
    int hora;
    int minuto;
    int segundo;
};

int main(void)
{

    void receberHorarios(struct horario lista[]);
    void printfHorarios(struct horario lista[]);

    struct horario listaHorarios[5];

    receberHorarios(listaHorarios);
    printfHorarios(listaHorarios);
}

void receberHorarios(struct horario lista[5])
{

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o %i horario a ser inserido (hh:mm:ss): ", i + 1);
        scanf("%i:%i:%i", &lista[i].hora,
                          &lista[i].minuto,
                          &lista[i].segundo);
    }
}

void printfHorarios(struct horario lista[5])
{

    for (int i = 0; i < 5; i++)
    {
        printf("O %i horario: %i:%i:%i", i + 1,
                                            lista[i].hora,
                                            lista[i].minuto,
                                            lista[i].segundo);
    }
}