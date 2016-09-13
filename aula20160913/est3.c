#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void inserir(void);
void mostrar(void);
int i;
struct CADASTRO
{
          char nome[30];
          char idade[3];
          char telefone[11];
};

          struct CADASTRO vetor[10];

int num;

int main(void)
{
              for(; ;)
              {
              printf("\t\t\t\tCADASTRO:\n");
              printf("1-Para ver nomes\n");
              printf("2-Para ver idades\n");
              printf("3-Para ver telefones\n");
              printf("0-  Sair\n");
              scanf("%d",&num);
              switch(num)
              {
              case 1: nome();
              break;
              case 2: idade();
              break;
              case 3: telefone();
              break;
              case 0: exit(0);
              default: puts("TENTE NOVAMENTE");
              }

}
getchar();
}


void inserir (void)
{
                 for(i=0; i<10; i++)
                 {
                 fflush(stdin);
                 printf("Entre com o nome: ");
                 gets(vetor[i].nome);
                 fflush(stdin);
                 printf("Entre com o telefone:");
                 gets(vetor[i].telefone);
                 fflush(stdin);
                 printf("Entre com a idade:");
                 gets(vetor[i].idade);
                 fflush(stdin);
                 }

getche();
}
void mostrar(void)
{
int i;
          for(i=0; i<10; i++)
          {
          printf("\n Nome: %s",vetor[i].nome);
          printf("\n Telefone: %s",vetor[i].telefone);
          printf("\n Idade: %s",vetor[i].idade);
          }
return 0;
}
