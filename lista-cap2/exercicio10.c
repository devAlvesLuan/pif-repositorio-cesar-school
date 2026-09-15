#include <stdio.h>

int main() {
    double grau_celsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &grau_celsius);

    double grau_fahrenheit = (grau_celsius * 9.0 / 5.0) + 32.0;
    double grau_kelvin = grau_celsius + 273.15;

    printf("a) Temperatura em Fahrenheit: %.2lf\n", grau_fahrenheit);
    printf("b) Temperatura em Kelvin: %.2lf\n", grau_kelvin);

}