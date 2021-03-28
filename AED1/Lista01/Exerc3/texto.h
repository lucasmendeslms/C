//Arquivo texto.h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Texto{
    char texto[];
};

Texto *criarTexto (char * t);

void liberarTexto (Texto * t);

unsigned int tamanhoTexto (Texto * t);

char * obterTexto (Texto *t);

void mostrarTexto (Texto *t, unsigned int colunas);

Texto *copiarTexto (Texto *t);

void substituirTexto (Texto * t, char *alteracao);

Texto * concatenarTextos (Texto * t1, Texto * t2);

char * obterSubtexto (Texto * t, unsigned int inicio, unsigned int tamanho);

unsigned int encontrarSubtexto (Texto * t, char * subtexto, unsigned int ocorrencia);

int compararTextos (Texto * t1, Texto * t2);


Texto *criaTexto(char *t){

    struct Texto *criandoTexto;

    *criandoTexto -> texto = *t;

    return criandoTexto;

}

void liberarTexto(Texto *t){
    free(t);
}

unsigned int tamanhoTexto(Texto *t){

    int numCaracteres = 0;

    while(t != '\0'){
        numCaracteres++;
    }

    return numCaracteres;

}

char *obterTexto(Texto *t){

    return t->texto;
}

void mostrarTexto(Texto *t, unsigned int colunas){

    while(t != '\0'){
    printf("%s", t);
    }
}

Texto *copiarTexto(Texto *t){

    struct Texto *copiandoTexto;

    *copiandoTexto -> texto = t;

    return copiandoTexto;
}

void substituirTexto(Texto *t, char *alteracao){

    *t->texto = *alteracao;
}

Texto *concatenarTextos(Texto *t1, Texto *t2){

    for(int i = 0; t1[i] != '\0'; ++i);
    for(int j = 0; t2[j] != '\0'; ++j, ++i){
        t1[i] = t2[j];
    }

    t1[i] = '\0';
    return t1;
       
}

char *obterSubtexto(Texto *t, unsigned int inicio, unsigned int tamanho){

}

unsigned int encontrarSubtexto (Texto * t, char * subtexto, unsigned int ocorrencia){

}

int compararTextos (Texto * t1, Texto * t2){

    if(t1->texto  < t2->texto ){
        printf("MENOR");
    }
    else if(t1->texto > t2->texto){
        printf("MAIOR");
    }
    else if(t1->texto == t2->texto){
        printf("IGUAL");
    }
}
