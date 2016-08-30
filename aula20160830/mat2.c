#include<stdio.h>
#include<math.h>
int main () {
    float A,b,c, triangulo;
    printf("Lado b do triangulo: ");
    scanf("%f",&b);
    printf("Lado c do triangulo: ");
    scanf("%f",&c);
    printf("Angulo entre 2 lados do triangulo em radianos: ");
    scanf("%f",&A);
    triangulo = sqrt(pow(b,2.)+pow(c,2.)+(-2*b*c)*(cos(A)));
    printf("O terceiro lado do triangulo e: %f", triangulo);
    return 0;
}
