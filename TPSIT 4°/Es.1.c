#include <stdio.h>
int main()
{
    int a, b;
    double rapporto = 0;

    do{
        printf("\nInserire il primo numero ");
    scanf("%d", &a);

    printf("\nInserire il secondo numero ");
    scanf("%d", &b);

    if (a > b) {
            rapporto = (double)b / a;
        } else {
            rapporto = (double)a / b;
        }

        printf("\nIl rapporto è %f", rapporto);

    } while(a!=0 && b!=0);
    
}