#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    double rapporto = 0;
    
    do
    {

        printf("\nInserire il primo numero ");
        scanf("%d", &a);
        printf("\nInserire il secondo numero ");
        scanf("%d", &b);
        if (a < b)
        {
            rapporto = (double) b/ (double) a;
        }
        else
        {
            rapporto = (double) a/ (double) b;
        }
        if (rapporto < 0)
        {
            printf("\nNon è stato possibile eseguire la radice quadrata del rapporto dato che esso era negativo");
            break;
        }
        rapporto = sqrt(rapporto);

        printf("\nLa radice quadrata del rapporto è  %f\n", rapporto);
    } while (rapporto > 0);
}