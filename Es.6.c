#include <stdio.h>
int main()
{
    int A, B;
    int i=0;
    int somma = 0;
    int numero;
    double media = 0;
    do
    {
        printf("Inserisci il primo valore\n");
        scanf("%d", &A);
        printf("Inserisci il secondo valore\n");
        scanf("%d", &B);

    } while (A > B);

    do{
        printf("Inserisci un numero\n");
        scanf("%d", &numero);

        if(numero>=A && numero<=B){

            somma = somm a +numero;
            i++;
        }

    }while(numero>=A && numero <=B);
    
    media = (double)somma / (double) i ;
    printf("La media è %f\n", media);
}