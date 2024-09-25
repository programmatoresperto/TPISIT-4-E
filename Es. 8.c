#include <stdio.h>
#include <math.h>
int main() {
	int N;
	double somma = 0;
	do {
		printf("Quanti numeri si vogliono inserire (N>0)\n");
	scanf("%d", &N);

	}while (N <= 0);
	
	int numeri [N] ;
	for(int i=0; i<N; i++) {
		printf("Inserire i numeri\n");
		scanf("%d", &numeri[i]);
		if(numeri[i]<0) {
			printf("Non possibile eseguire la radice quadrata");
			return 0;
		}
		somma = somma + sqrt(numeri[i]);
	}
	printf("La somma è %f", somma);

}