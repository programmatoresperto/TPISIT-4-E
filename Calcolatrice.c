#include <stdio.h>
double somma(double a, double b){
    double somma = a+b;
    return somma;
}
double differenza(double a, double b){
    double differenza = a-b;
    return differenza;
}
double moltiplicazionne(double a, double b){
    double moltiplicazione = a*b;
    return moltiplicazione;
}
double divisione(double a, double b){
    double divisione = a/b;
    return divisione;
}
int main(){
    double a, b;
    printf("inserire il valore di a");
    scanf("%d", a);
    printf("inserire il valore di b");
    scanf("%d", b);
    printf("cosa si vuole fare 1) addizione 2) sottrazione 3) moltiplicazione 4) divisione");
    
}