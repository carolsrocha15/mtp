#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( void ) {
	int a[10], soma = 0, mult =1, i;
	for ( i = 0; i < 10; i++ ) {
		printf ( "Numero %02d: ", i + 1 );
		scanf ( "%d", &a[i] );
	}
	for ( i = 0; i < 10; i++ ) 
	printf ( "Digitado: %d\n", a[i] );
	for ( i = 0; i < 10; i++ ) 
	soma += a[i];
	for (i=0;i<10;i++) {
	mult = mult * a[i];
	}
	printf ( "\nSoma total: %d\n", soma );
	printf("\nMultiplicacao = %d\n", mult);
	return 0;
}

