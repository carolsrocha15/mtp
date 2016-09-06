#include <stdio.h> 
#include <stdlib.h>
#define N 10
 
int main (void)
{
    int numeros[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i, aux;
    for(i=0; i<N;i++)
	printf("%d  ", numeros[i]);
	for (i=0; i < N/2; i++) {
        aux = numeros[i];
        numeros[i] = numeros[N-i-1];
        numeros[N-i-1] = aux;
    }
    printf("\n");
    for(i=0; i<N;i++)printf("%d  ", numeros[i]);
    
    printf("\n");
    system("PAUSE"); 
    return 0;
}  
