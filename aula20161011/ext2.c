#include <stdio.h>
typedef struct produto
{
                char nome[32];
                int codigo, preco;
} PRODUTO;

typedef struct vendas
{
                float produtos;
                int quantidades;
} VENDAS;

void Exibe(PRODUTO prod)
{
    printf("Nome: %s\n", prod.nome);
    printf("Codigo: %d\n", prod.codigo);
    printf("preco: %d\n", prod.preco);
}
void Mostra(VENDAS vend)
{
    printf("Produtos: %s\n", vend.produtos);
    printf("Quantidades: %d\n", vend.quantidades);
}

void recebe(char tipo, void * endereco) {
    int c;
    switch(tipo){
        case 'i': scanf("%d",(int*) endereco); break;
        case 'f': scanf("%f",(float*) endereco); break;
        case 'd': scanf("%lf",(double*) endereco); break;
        case 'c': scanf("%c",(char*) endereco); break;
    }
    while((c = getchar()) != EOF && c != '\n'); // apagar o buffer de entrada
}

void recebeSTR(char * endereco, int n) {
    fgets(endereco, n, stdin);
    if(endereco[strlen(endereco)-1] == 10)
       endereco[strlen(endereco)-1] = '\0';
}
