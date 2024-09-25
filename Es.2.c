#include <stdio.h>
int main()
{
    int a, b;
    int prodotto = 0;
    int somma = 0;
    do
    {

        printf("\nInserire il primo numero ");
        scanf("%d", &a);

        printf("\nInserire il secondo numero ");
        scanf("%d", &b);

        prodotto = a * b;
        somma = somma + prodotto;

    } while (a != 0 && b != 0);
    printf(" \nLa somma totale è %d", somma);
}