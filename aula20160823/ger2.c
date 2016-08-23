#include<stdio.h>
#include <time.h>
int main() {
	int dado1,numero,continua;
	srand(time(0));
	dado1 = rand()%100;
	do{
		printf("Digite um numero aleatorio de 0 a 99: ");
	scanf("%d", &numero);
	if(numero<dado1)
	printf("Baixo!\n");
	if(numero>dado1)
	printf("Alto!\n");
	else
	printf("acertou!\n");
	printf("Executar novamente? {S/N]: "); 
    scanf("%c", &continua); 
} while (continua == 's');
	return 0;
}
