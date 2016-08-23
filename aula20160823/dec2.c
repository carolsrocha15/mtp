#include<stdio.h>
#include <time.h>
int main() {
	int num,num2,soma;
	srand(time(0));
	printf("Digite um numero inteiro nao-negativo: ");
	scanf("%d", &num);
	num2 = rand()%2;
	soma = num+num2;
	 printf("A soma e: %d\n", soma);
	 if (soma%2==0)
	 printf("O numero e par!\n");
	 else
	 printf("O numero e impar!\n");
	 return 0;
}
