#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>

void Calcolo(int valore){

            for(int i=0; i<valore; i++){
                
                printf("\n%d\n", i);
                wait(1);

            }
}
void Calcolo2(int valore){

    for(int i = valore; i>0; i--){
        printf("\n%d\n", i);
        wait(1);
    }

}

int main(){
    int P2, P3, P4, P5, P6;
    int valore;
    int quadrato;
    
    printf("Io sono P1 questo è il mio PID %d\n", getpid());
     
     printf("\nInserire un valore tra 1 e 10\n");
        
        scanf("%d", &valore);

    while(valore<0 || valore>10){

        printf("\nValore non valido reinserirlo\n");
        
        scanf("%d", &valore);

    }        
    
    
    P2 = fork();
    
     if(P2==0){//P2
      
        printf("\nIo sono P2 questo è il mio PID %d, mio padre P1 ha PID %d\n", getpid(), getppid());
        
        P4 = fork();
       
        
         if(P4==0){//P4
                
                printf("\nIo sono P4 questo è il mio PID %d, mio padre P2 ha PID %d\n", getpid(), getppid());
                
                Calcolo2(valore);
                exit(0);
            }else if(P4>0){//P2

            printf("\nIo sono P2 questo è il mio PID %d, mio padre P1 ha PID %d\n", getpid(), getppid());

            P5 = fork();
        
        if(P5==0){//P5
            
            printf("\nIo sono P5 questo è il mio PID %d, mio padre P2 ha PID %d\n", getpid(), getppid());
            Calcolo(valore);
            exit(0);
        
        }else if(P5>0){//P2

            printf("\nIo sono P2 questo è il mio PID %d, mio figlio P5 ha PID %d\n", getpid(), P5);
            while (wait(NULL) > 0)
            ;
            exit(0);//Esco da P2
        
        }
    }
         
    }

    if(P2>0){//P1

        printf("\nIo sono P1 questo è il mio PID %d, mio padre P2 ha PID %d\n", getpid(), P2);       
    
    P3 = fork();
    
    if(P3 == 0){//P3
            
        printf("\nIo sono P3 questo è il mio PID %d, mio padre P1 ha PID %d\n", getpid(), getppid());
        
        P6 = fork();

        if(P6==0){//P6

            printf("\nIo sono P6 questo è il mio PID %d, mio padre P3 ha PID %d\n", getpid(), getppid());

            quadrato = valore*valore;
            exit(quadrato);


        }else if(P6>0){//P3
            
            int status6;
            printf("\nIo sono P3 questo è il mio PID %d, mio figlio P6 ha PID %d\n", getpid(), P6);
           wait(&status6);
           printf("\nil quadrato del valore %d\n", WEXITSTATUS(status6));
           exit(0);
        }
    
    }else if(P3>0){//P1
        printf("\nIo sono P1 questo è il mio PID: %d Mio figlio P3 ha pid: %d\n", getpid(), P3);
            while (wait(NULL) > 0)
                 ;
    }
}
    return 0;

}