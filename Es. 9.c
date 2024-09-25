#include <stdio.h>
int main(){
    int A, B, C;
    int valoreMassimo, valoreMinimo;
    do{
        printf("Inserire il primo valore\n");
        scanf("%d", &A);
        printf("Inserire il secondo valore\n");
        scanf("%d", &B);
        printf("Inserire il terzo valore\n");
        scanf("%d", &C);

        if(C < B < A){
            printf("Terna non valida");
            continue;
        }

            
        if(A>B && A>C){

        valoreMassimo = A;

    }

        if(B>A && B>C){

        valoreMassimo = B;

    }

        if(C>B && C>A){

        valoreMassimo = C;

    }
    
        if(A<B && A<C){

        valoreMinimo= A;

    }

        if(B<A && A<C){

        valoreMinimo = B;

    }

        if(C<B && C<A){

        valoreMinimo = C;

    }
        
        

    }while( A < 0 || B < 0 || C < 0);
    
   
    printf("il valore massimo è %d\n", valoreMassimo);
    printf("il valore minimo è %d", valoreMinimo);
}