#include<stdio.h>
int main() {
	double N1, N2, soma;
	int vetor[] = {N1,N2};
	int contagem = 0;
    printf("Digite um numero real: ");
    scanf("%lf",&N1);
    printf("Digite outro numero real: ");
    scanf("%lf",&N2);
	int tam = sizeof(vetor)/ sizeof(int);
    unsigned char * ponteiro = NULL; //Aponta pra lugar nenhum
    ponteiro = (unsigned char *) vetor; //&(vetor[0])
     for(; ponteiro < vetor + tam; ponteiro++) {
        printf("%p : %X\n", ponteiro, *ponteiro);
        if(*ponteiro == 0X0)
        contagem++;
    }
    printf("Sao %d os bytes de memoria com apenas 0's.\n", contagem);
    return 0;
}
