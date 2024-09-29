#include <stdio.h>
int main(){
   
    int numero, i;
    do{
        printf("Inserire un numero\n");
    scanf("%d", &numero);

    } while(numero < 0);

    do{
    
       printf("%d\n", i);
        
        i = i + 2;

    }while(i <= numero);
        
}
