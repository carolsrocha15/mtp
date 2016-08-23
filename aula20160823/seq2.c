#include<stdio.h>
int main() {
    float base, altura, area;
    printf("Preencha o valor da base do triangulo: ");
    scanf("%f",&base);
    printf("Preencha o valor da altura do triangulo: ");
    scanf("%f",&altura);
    area = (base*altura)/2;
    printf("A area do triangulo e: %f", area);
    return 0;
}
