#include<stdio.h>
int potencia(int B, int P);
int main() {

	int B,P,potencia;
	printf("Digite um numero para a base: ");
	scanf("%d", &B);
	printf("Digite um numero para a potencia: ");
	scanf("%d", &P);
	printf("%d", potencia(B,P));
	return 0;
}
