#include <stdio.h>
float media(float * dados, int ndados);
float maior(float * dados, int ndados);
int main() {
	int ndados;
	float * dados;
	printf("Informe a quantidade dos dados: ");
	scanf("%d", &ndados);
	dados = malloc(ndados*sizeof(float));
	recebe(dados,ndados);
	printf("Media %g\n", media(dados, ndados));
	printf("Maior : %g\n",maior(dados, ndados));
	return 0;
}
void recebe(float * dados, int ndados) {
	int i;
	for(i=0; i<ndados; i++) {
	printf("Entre com o dado: #%d: ", i);
	scanf("%f", &dados[i]);
}
}
float media(float * dados, int ndados) {
	float soma = 0.f;
	int i;
	for(i=0; i<ndados; i++) soma += dados[i];
	return soma/ndados;
}
float maior(float * dados, int ndados) {
 int num[10],i,maior;
  for(i=0; i<10 ;i++)
  maior=num[0];
{
for (i=0;i<10;i++){
if (num[i] > maior){
maior = num[i];
}
}
}

