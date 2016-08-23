#include<stdio.h>
int main() {
    float a, b, c, media;
    printf("Preencha primeira nota do aluno: ");
    scanf("%f",&a);
    printf("Preencha a segunda nota do aluno: ");
    scanf("%f",&b);
    printf("Preencha a terceira nota do aluno: ");
    scanf("%f",&c);
    media = ((a*2)+(b*3)+(c*5))/(2+3+5);
    printf("A media e: %f", media);
    return 0;
}
