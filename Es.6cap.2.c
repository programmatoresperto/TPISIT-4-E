#include<stdio.h>
int main(){
    int N, i;
    do{
        printf("Inseirsci un numero\n");
        scanf("%d", &N);
    }while(N<0);

    for(int i = -N; i <= N; i++){
        printf("%d\n", i);
    }

}