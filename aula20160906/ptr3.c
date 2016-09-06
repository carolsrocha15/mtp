#include<stdio.h>
int main() {
    int contagem = 0;
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int tam = sizeof(vetor)/ sizeof(int);
    unsigned char * ponteiro = NULL; //Aponta pra lugar nenhum
    ponteiro = (unsigned char *) vetor; //&(vetor[0])
    for(; ponteiro < vetor + tam; ponteiro++) {
        printf("%p : %X\n", ponteiro, *ponteiro);
        if(*ponteiro != 0X0)
        contagem++;
    }
    printf("Sao %d os bytes de memoria com apenas 1's.\n", contagem);
    return 0;
}
