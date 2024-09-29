#include <stdio.h>
int main(){
    int numero, i;
    do{
        printf("Inserire un numero\n");
    scanf("%d", &numero);

    } while(numero <= 0);

    do{
        i++;
        printf("%d\n", i);

    }while(i < numero);
        
}