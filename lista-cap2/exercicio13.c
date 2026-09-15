#include <stdio.h>

int main() {
    float lado_quadrado;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado_quadrado);

    float area_quadrado = lado_quadrado * lado_quadrado;

    float base_retangulo, altura_retangulo;
    printf("Digite a base do retangulo e a altura: ");
    scanf("%f %f", &base_retangulo, &altura_retangulo);

    float area_retangulo = base_retangulo * altura_retangulo;

    float base_triangulo, altura_triangulo;
    printf("Digite a base do triangulo e a altura: ");
    scanf("%f %f", &base_triangulo, &altura_triangulo);

    float area_triangulo = (base_triangulo * altura_triangulo) / 2.0;

    printf("a) Area do quadrado: %f\n", area_quadrado);
    printf("b) Area do retangulo: %f\n", area_retangulo);
    printf("c) Area do triangulo: %f\n", area_triangulo);


}