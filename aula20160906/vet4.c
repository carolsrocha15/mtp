#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10
int main() {
	srand(time(0));
	int numero, i;
	int vet[N];
	printf("Entre com um numero inteiro nao negativo entre 1 e 1000: ");
	scanf("%d", &numero);
	for(i=0; i<N; i++)
	vet[i] = rand()%numero + 1;
	
	return 0;
}
