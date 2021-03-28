#include <stdio.h>
#include <data.h>

int main(){

   

    Data *listaSequencial;

    Data aux;
    Data aux2;
    char dados[256];

    
    int funcaoDesejada = 1, tamanho;

        do{
            
            printf("1 - Criar data \n"); 
            printf("2 - Copiar data \n");
            printf("3 - Liberar data\n");
            printf("4 - Somar dias\n");
            printf("5 - Subtrair dias da data\n");
            printf("6 - Atribuir uma data\n");
            printf("7 - Obter o dia de uma data\n");
            printf("8 - Obter o mes de uma data\n");
            printf("9 - Obter o ano de uma data\n");
            printf("10 - Verificar se a data pertence a um ano bissexto\n");
            printf("11 - Comparar uma data \n");
            printf("12 - Verificar o numero de dias existentes entre duas datas\n");
            printf("13 - Verificar o numero de meses de uma data\n");
            printf("14 - Verificar o numero de anos de uma data \n");
            printf("15 - Obter o dia da semana\n");
            printf("16 - Imprimir uma data \n");
            
            scanf("%i", &funcaoDesejada);
            

        }while(funcaoDesejada != 0);

        int dia, mes, ano, diasSomado;

        switch(funcaoDesejada){


        case 1: 
            printf("Informe o dia: ");
            scanf("%i", &dia);
            printf("Informe o mes: ");
            scanf("%i", &mes);
            printf("Informe o ano: ");
            scanf("%i", &ano);
           listaSequencial =  criaData(dia, mes, ano);
           printf("%i/%i/%i", listaSequencial->dia, listaSequencial->mes, listaSequencial->ano);
           break;

        case 2:
            printf("Informe o dia: ");
            scanf("%i", &aux.dia);
             printf("Informe o mes: ");
            scanf("%i", &aux.mes);
            printf("Informe o ano: ");
            scanf("%i", &aux.ano);
            copiaData(aux);
            break;

        case 3: 
            liberaData(listaSequencial);
            break;

        case 4: 
            printf("Informe o dia: ");
            scanf("%i", &aux.dia);
            printf("Informe o mes: ");
            scanf("%i", &aux.mes);
            printf("Informe o ano: ");
            scanf("%i", &aux.ano);
            scanf("Informe o numero de dias a serem somados: ");
            scanf("%i", &diasSomado);
            listaSequencial =  somaDiasData(aux, diasSomado);
            printf("%i/%i/%i", listaSequencial->dia, listaSequencial->mes, listaSequencial->ano);
            break;

        case 5: 
            printf("Informe o dia: ");
            scanf("%i", &aux.dia);
            printf("Informe o mes: ");
            scanf("%i", &aux.mes);
            printf("Informe o ano: ");
            scanf("%i", &aux.ano);
            scanf("Informe o numero de dias a serem subtraidos: ");
            scanf("%i", &diasSomado);
            listaSequencial =  subtrairDiasData(aux, diasSomado);
            printf("%i/%i/%i", listaSequencial->dia, listaSequencial->mes, listaSequencial->ano);
            break;    
                
        case 6:
            printf("Informe o dia: ");
            scanf("%i", &dia);
            printf("Informe o mes: ");
            scanf("%i", &mes);
            printf("Informe o ano: ");
            scanf("%i", &ano);
            atribuirData(listaSequencial, dia, mes, ano);
            break;  

        case 7: 
            printf("Informe o dia: ");
            scanf("%i", &aux.dia);
            printf("Informe o mes: ");
            scanf("%i", &aux.mes);
            printf("Informe o ano: ");
            scanf("%i", &aux.ano);
           
            printf("Dia: %i", obtemDiaData(aux));
            
            break;

        case 8: 
            printf("Informe o dia: ");
            scanf("%i", &aux.dia);
            printf("Informe o mes: ");
            scanf("%i", &aux.mes);
            printf("Informe o ano: ");
            scanf("%i", &aux.ano);
           
            printf("Mes: %i", obtemMesData(aux));
            
            break;  

         case 9: 
            printf("Informe o dia: ");
            scanf("%i", &aux.dia);
            printf("Informe o mes: ");
            scanf("%i", &aux.mes);
            printf("Informe o ano: ");
            scanf("%i", &aux.ano);
           
            printf("Ano: %i", obtemAnoData(aux));
            
            break;     
            

          case 10: 
            printf("Informe o dia: ");
            scanf("%i", &aux.dia);
            printf("Informe o mes: ");
            scanf("%i", &aux.mes);
            printf("Informe o ano: ");
            scanf("%i", &aux.ano);
           
            if(bissextoData(aux) == 1){
                printf("Ano bissexto\n");
            }else printf("Nao e bissexto");
            
            break;

        case 11: 
            printf("Informe o dia: ");
            scanf("%i", &aux.dia);
            printf("Informe o mes: ");
            scanf("%i", &aux.mes);
            printf("Informe o ano: ");
            scanf("%i", &aux.ano);

            printf("Informe o dia: ");
            scanf("%i", &aux2.dia);
            printf("Informe o mes: ");
            scanf("%i", &aux2.mes);
            printf("Informe o ano: ");
            scanf("%i", &aux2.ano);
           
            comparaData(aux, aux2);
            
            break; 

        case 12: 
            printf("Informe o dia: ");
            scanf("%i", &aux.dia);
            printf("Informe o dia: ");
            scanf("%i", &aux2.dia);
            
            numeroDiasDatas(aux, aux2);
            
            break; 

        case 13:       
            printf("Informe o mes: ");
            scanf("%i", &aux.mes);
            printf("Informe o mes: ");
            scanf("%i", &aux2.mes);
            numeroMesesDatas(aux, aux2);
            
            break; 

        case 14:       

            printf("Informe o ano: ");
            scanf("%i", &aux.ano);
            printf("Informe o ano: ");
            scanf("%i", &aux2.ano);
           
            numeroAnosDatas(aux, aux2);
            
            break;     

         case 15:       

            printf("Informe o dia: ");
            scanf("%i", &aux.dia);
            printf("Informe o mes: ");
            scanf("%i", &aux.mes);
            printf("Informe o ano: ");
            scanf("%i", &aux.ano);

            switch (obtemDiaSemanaData(aux))
            {
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda-Feira\n");
                break;
            case 3:
                printf("Terça-Feira\n");
                break;
            case 4:
                printf("Quarta-Feira\n");
                break;
            case 5:
                printf("Quinta-Feira\n");
                break;
            case 6:
                printf("Sexta-Feira\n");
                break;
            case 7:
                printf("Sabado\n");
                break;
            }  

         case 16:       

            printf("Informe o dia: ");
            scanf("%i", &aux.dia);
            printf("Informe o mes: ");
            scanf("%i", &aux.mes);
            printf("Informe o ano: ");
            scanf("%i", &aux.ano);
            printf("Informe o formato: ");
            scanf("%c", &dados);

            if(imprimeData(aux, dados) == "ddmmaaaa"){
                printf("%i/%i/%i", aux.dia, aux.mes, aux.ano);
           
            }

             else if(imprimeData(aux, dados) == "aaaammdd"){
                printf("%i/%i/%i", aux.ano, aux.mes, aux.dia);
           
            }

            else if(imprimeData(aux, dados) == "aaaa"){
                printf("%i", aux.ano);
           
            }

           else  if(imprimeData(aux, dados) == "mm"){
                    printf("%i", aux.mes);
            }

            else if(imprimeData(aux, dados) == "dd"){
                    printf("%i", aux.dia)
           }

           else {
                 printf("%i%i", aux.dia, aux.mes);
            }
            break;              
                                       
        }   
}

