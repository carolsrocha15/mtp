#include<stdio.h>
#include <time.h>
int main() {
	int dado1,dado2,dado3,soma;
	srand(time(0));
	dado1 = rand()%7;
	printf("o numero foi: %d\n", dado1);
	dado2 = rand()%7;
	printf("o numero foi: %d\n", dado2);
	dado3 = rand()%7;
	printf("o numero foi: %d\n", dado3);
	soma = dado1+dado2+dado3;
	if(soma==7||soma==11)
	printf("O jogador ganhou!\n");
	else
	printf("O jogador perdeu!\n");
	return 0;
}
