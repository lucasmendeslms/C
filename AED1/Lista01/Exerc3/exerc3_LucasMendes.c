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

int compararTextos (Texto *t1, Texto *t2){

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

//Arquivo texto.c

int main(){

    Texto *texto;

    Texto aux;
    Texto aux2;

    
    int funcaoDesejada, tamanho;

        do{
            
            printf("1 - Criar texto \n"); 
            printf("2 - Liberar texto \n");
            printf("3 - Informar o tamanho do texto\n");
            printf("4 - Obter texto\n");
            printf("5 - Mostrar texto\n");
            printf("6 - Copiar o texto\n");
            printf("7 - Substituir o texto\n");
            printf("8 - Concatenar textos\n");
            printf("9 - Obter sub texto\n");
            printf("10 - Encontrar sub texto\n");
            printf("11 - Comparar textos\n");
   
            scanf("%i", &funcaoDesejada);

        }while(funcaoDesejada != 0);  

         case 1: 
            
           break;

        case 2:
            liberarTexto(texto);
            break;

        case 3: 
            
            break;

        case 4: 
            
            break;

        case 5: 
            
            break;    
                
        case 6:
            
            break;  

        case 7: 
            
            
            break;

        case 8: 
            
            
            break;  

         case 9: 
            
            
            break;     
            

          case 10: 
            
            
            break;

        case 11: 
            
            
            break; 