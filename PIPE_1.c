#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Uso corretto: %s <file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int p1p0[2]; // Pipe per la comunicazione tra i processi
    if (pipe(p1p0) == -1)
    {
        perror("Errore nella creazione della pipe");
        exit(EXIT_FAILURE);
    }

    pid_t pid = fork();
    if (pid == -1)
    {
        perror("Errore nella fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) // Processo figlio 1: `cat <file>`
    {
        close(p1p0[0]);             // Chiude il lato di lettura della pipe
        dup2(p1p0[1], STDOUT_FILENO); // Redirige stdout alla pipe
        close(p1p0[1]);             // Chiude il file descriptor originale

        execl("/bin/cat", "cat", argv[1], (char *)NULL);
        perror("Errore execl cat"); // Se execl fallisce
        exit(EXIT_FAILURE);
    }

    pid = fork();
    if (pid == -1)
    {
        perror("Errore nella seconda fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) // Processo figlio 2: `more`
    {
        close(p1p0[1]);             // Chiude il lato di scrittura della pipe
        dup2(p1p0[0], STDIN_FILENO); // Redirige stdin alla pipe
        close(p1p0[0]);             // Chiude il file descriptor originale

        execl("/bin/more", "more", (char *)NULL);
        perror("Errore execl more");
        exit(EXIT_FAILURE);
    }

    // Processo padre: chiude i file descriptor non più necessari e attende i figli
    close(p1p0[0]);
    close(p1p0[1]);

    wait(NULL);
    wait(NULL);

    return 0;
}
