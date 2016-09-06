#include<stdio.h>
int main() {
    int contagem = 0;
    int vetor[] = {0,1,2,4,8};
    int tam = sizeof(vetor)/ sizeof(int);
    unsigned char * ponteiro = NULL; //Aponta pra lugar nenhum
    ponteiro = (unsigned char *) vetor; //&(vetor[0])
    for(; ponteiro < vetor + tam; ponteiro++) {
        printf("%p : %X\n", ponteiro, *ponteiro);
        if(*ponteiro == 0x0)
        contagem++;
    }
    printf("Sao %d os bytes de memoria com apenas 0's.\n", contagem);
    return 0;
}
