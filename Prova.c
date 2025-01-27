#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>

int main(){
    int P2, P3, P4, P5, P6;
    int valore;
    printf("Inserire il valore\n");
    scanf("%d", &valore);
    printf("Io sono P1 questo è il mio PID %d\n", getpid());
    P2 = fork();
    if(P2>0){//P1

    }
    else if(P2==0){//P2
        
        printf("Io sono P2 questo è il mio PID %d, mio padre P1 ha PID %d\n", getpid(), getppid());
        
        P4 = fork();
        
        if(P4>0){//P2

            printf("Io sono P2 questo è il mio PID %d, mio padre P1 ha PID %d\n", getpid(), getppid());
            P5 = fork();
            if(P5==0){//P5
            printf("Io sono P5 questo è il mio PID %d, mio padre P2 ha PID %d\n", getpid(), getppid());
            for(int i=0; i<valore; i++){
                
            }

            }
            
            if(P4==0){//P4
                printf("Io sono P4 questo è il mio PID %d, mio padre P2 ha PID %d\n", getpid(), getppid());
                for(int i=valore; i==0; i--){
                    printf(valore);
                    wait(1);
                }
            }
        }
    }
    
    

}