#include <stdio.h>
int main()
{
    int A, B, C;
    int diffPari = 0;
    int diffDispari = 0;
    int nulla = 0;
    do
    {
        printf("Inserire il primo valore\n");
        scanf("%d", &A);
        printf("Inserire il secondo valore\n");
        scanf("%d", &B);
        printf("Inserire il terzo valore\n");
        scanf("%d", &C);
        if (A - B % 2 == 0)
        {
            diffPari++;
        }
        else if (A - B % 2 == 1)
        {
            diffDispari++;
        }
        else if (A-B==0)
        {
            nulla++;
        }

    } while (A + B >= C);
    printf("La differenza pari è accaduta %d volte\n", diffPari);
    printf("La differenza dispari è accaduta %d volte\n", diffDispari);
    printf("La differenza nulla è accaduta %d volte\n", nulla);
}