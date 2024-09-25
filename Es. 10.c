#include <stdio.h>
#include <string.h>
int main(){
    int consumazione;
    int bevande=0;
    int ristorazioni=0;
    int importo;
    int sommaBevande=0;
    double mediaBevande=0;
    int sommaRistorazioni=0;
    double mediaRistorazioni=0;
    char uscita [4];

    do{

    
        printf("Inserire le consumazioni\n");

        printf("(1) Bevanda o (2) ristorazione\n");
        scanf("%d", &consumazione);

        if(consumazione==1){
            
        bevande++;

        printf("Inserire l'importo\n");
        scanf("%d", &importo);

        sommaBevande=sommaBevande+importo;
        }

        else if(consumazione==2){

        ristorazioni++;

        printf("Inserire l'importo\n");
        scanf("%d", &importo);

        sommaRistorazioni=sommaRistorazioni+importo;

        }
        printf("Uscire? digita esci\n");
        scanf("%s", &uscita);

    
    }while(strcmp(uscita, "esci") != 0);

    mediaBevande=sommaBevande/bevande;
    mediaRistorazioni=sommaRistorazioni/ristorazioni;

    printf("La media di incasso delle bevande è %f\n", mediaBevande);
    printf("La media di incasso delle ristorazioni è %f\n", mediaRistorazioni);

    if(bevande>ristorazioni){
        printf("Sono state vendute più bevande");
    }
    else if(ristorazioni>bevande){
        printf("Sono state vendute più ristorazioni");
    }
    else{
        printf("Sono state vendute lo stesso numero di bevande e ristorazioni");
    }
}