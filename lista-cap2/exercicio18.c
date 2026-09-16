#include <stdio.h>

int main() {
    float raio;
    const float pi = 3.14159;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    float area_superfice = 4 * pi * (raio * raio);
    float volume = (4.0 / 3.0) * pi * (raio * raio * raio);

    printf("A área da superfície da esfera é: %.2f\n", area_superfice);
    printf("O volume da esfera é: %.2f\n", volume);
    
}