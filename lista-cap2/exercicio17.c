#include <stdio.h>

int main() {
    float raio;
    const float pi = 3.141593;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    float area = pi * (raio * raio);
    float circunferencia = 2 * pi * raio;
    
    printf("A área do círculo é: %.2f\n", area);
    printf("A circunferência do círculo é: %.2f\n", circunferencia);
    
}