#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data{
    int dia;
    int mes;
    int ano;
};

Data *criaData(unsigned int dia, unsigned int mes, unsigned int ano); 

Data *copiaData(Data d); 

void liberaData(Data *d);

Data *somaDiasData(Data d, unsigned int dias);

Data *subtrairData(Data d, unsigned int dias);

void atribuirData(Data *d, unsigned int dia, unsigned int mes, unsigned int ano);

unsigned int obtemData(Data d);

unsigned int obtemMesData(Data d);

unsigned int obtemAnoData(Data d);

unsigned int bissextoData(Data d);

int comparaData(Data d1, Data d2);

unsigned int numeroDiasDatas(Data d1, Data d2);

unsigned int numeroMesesDatas(Data d1, Data d2);

unsigned int numeroAnosDatas(Data d1, Data d2);

unsigned int obtemDiaSemanaData(Data d);

char *imprimeData(Data d, char *formato);


Data *criaData(unsigned int dia, unsigned int mes, unsigned int ano){
    
    struct Data *criandoData;

    criandoData -> dia = dd;
    criandoData -> mes = mm;
    criandoData -> ano = aaaa;

    return criandoData;
}

Data *copiaData(Data d){

    struct Data *copiandoData;

    copiandoData -> dia = d.dia;
    copiandoData -> mes = d.mes;
    copiandoData -> ano = d.ano;

    return copiandoData;
    
}

void liberaData(Data *d){

    free(d);
}

Data *somaDiasData(Data d, int dias){

    struct Data *somandoDias; 

    somandoDias -> dia = d.dia + dias;
    somandoDias -> mes = d.mes;
    somandoDias -> ano = d.ano;

    return somandoDias;
}


Data *subtrairDiasData (Data d, unsigned int dias){
   
    struct Data *subtraiData;

     subtraiData -> dia = d.dia - dias;
     subtraiData -> mes = d.mes;
     subtraiData -> ano = d.ano;

     return subtraiData;
}

void atribuirData (Data *d, unsigned int dia, unsigned int mes, unsigned int ano){

     struct Data *atribuiData;

     atribuiData -> dia = dia;
     atribuiData -> mes = mes;
     atribuiData -> ano = ano;

     printf("%i/%i/%i", atribuiData->dia, atribuiData->mes, atribuiData->ano);

}

unsigned int obtemDiaData (Data d){

    return d.dia;
}

unsigned int obtemMesData (Data d){

    return d.mes;
}

unsigned int obtemAnoData (Data d){

    return d.ano;
}

unsigned int bissextoData (Data d){

    if(d.ano %4==0 || d.ano %100!=0 || d.ano %400==0){
        return 1;
    }
    else{

        return 0;
    }
}

unsigned int numeroDiasDatas (Data d1, Data d2){

    if(d1.dia == d2.dia){
        return 0;
    }

    else {
        return d1.dia - d2.dia;
    }
}

int comparaData (Data d1, Data d2){

    if(d1.ano  < d2.ano ){
        printf("MENOR");
    }
    else if(d1.ano > d2.ano){
        printf("MAIOR");
    }
    else if(d1.ano == d2.ano){
        printf("IGUAL");
    }
}

unsigned int numeroMesesDatas (Data d1, Data d2){

    if(d1.mes == d2.mes){

        return 0;
    }

    else {

        return d1.mes - d2.mes;
    }
}

unsigned int numeroAnosDatas (Data d1, Data d2){

    if(d1.ano == d1.ano){

        return 0;
    }

    else{

        return d1.ano - d2.ano;
    }
}

unsigned int obtemDiaSemanaData (Data d){

    return d.dia;
}


char *imprimeData(Data d, char *formato){
    
    char *data;
    if(formato = "ddmmaaaa"){
 
        data = formato;
    }  

    else if(formato = "aaaammdd"){
 
        data = formato;
    }  

   else if(formato = "dd"){
 
        data = formato;
    }  


    else if(formato = "mm"){
 
        data = formato;
    }  


   else if(formato = "aaaa"){
 
        data = formato;
    }  
    
    else if(formato = "ddmm"){
 
        data = formato;
    }  
    else {
        data = "2";
    }
 
    return data;
}


