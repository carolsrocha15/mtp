#include<stdio.h>
#include<math.h>
int main () {
    float numero, base, logaritimo;
    printf("Digite um numero aleatorio: ");
    scanf("%f",&numero);
    printf("Digite uma base: ");
    scanf("%f",&base);
    logaritimo = (log10(numero))/(log10(base));
    printf("O resultado do logaritimo e: %f", logaritimo);
    return 0;
}
