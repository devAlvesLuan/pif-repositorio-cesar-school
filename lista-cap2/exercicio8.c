#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int quadrado = numero * numero;
    float decima_parte = numero / 10.0f;

    printf("a) Quadrado: %d\n", quadrado);
    printf("b) Decima parte: %.2f\n", decima_parte);

}