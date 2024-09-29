#include <stdio.h>
int main(){
    int N1, N2;
    int i;
    do{
        printf("Inseire il primo numero\n");
    scanf("%d", &N1);
    printf("Inseire il secondo numero\n");
    scanf("%d", &N2);

    }while(N1 < 0 && N2 < 0);
     
     i = N1;
     while(i < N2){
        i++;
        printf("%d\n", i);
     }
    
}