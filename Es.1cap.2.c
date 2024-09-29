#include <stdio.h>
int main(){
    int numero;
    int successivo;

    printf("Inserire un numero\n");
    scanf("%d", &numero);

    successivo = numero + 1;

    printf("Il successivo del numero inserito è %d", successivo);


}