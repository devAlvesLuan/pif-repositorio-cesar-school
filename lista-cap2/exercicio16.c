#include <stdio.h>

int main() {
    float altura_degrau, altura_escada;

    printf("Digite a altura de cada degrau (em centimetros): ");
    scanf("%f", &altura_degrau);
    printf("Digite a altura da escada (em metros): ");
    scanf("%f", &altura_escada);

    altura_escada *= 100;

    int numero_degraus = altura_escada / altura_degrau;
    printf("O número mínimo de degraus da escada é: %d\n", numero_degraus);
    
}