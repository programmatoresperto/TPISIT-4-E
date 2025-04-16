#include <stdio.h>
#include <math.h>
#include "calcolatrice.h"

double somma(double a, double b) { return a + b; }
double sottrazione(double a, double b) { return a - b; }
double moltiplicazione(double a, double b) { return a * b; }

double divisione(double a, double b) {
if (b != 0)
return a / b;
else {
printf("Errore: divisione per zero!\n");
return 0;
}
}

double potenza(double base, double esponente) {
return pow(base, esponente);
}

double radice(double numero) {
if (numero >= 0)
return sqrt(numero);
else {
printf("Errore: radice quadrata di numero negativo!\n");
return 0;
}
}
