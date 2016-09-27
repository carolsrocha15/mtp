#include <stdio.h>
struct soma_inteira {
	int numerador;
	int denominador;
};
struct somar_inteira divisao(int numerador, int denominador);
int main() {
	struct soma_inteira resposta;
	int numerador, denominador;
	printf("Entre com o numerador: ");
	scanf("%d", &numerador);
	printf("Entre com o denominador: ");
	scanf("%d", &denominador);
	resposta = soma(numerador,denominador);
	printf("Soma:%d\n", resposta.soma);
	return 0;
}
 
struct soma_inteira soma(int numerador, int denominador) {
	struct soma_inteira resposta;
	resposta.soma = (numerador / denominador)+(numerador/denominador);
	return resposta;
}

