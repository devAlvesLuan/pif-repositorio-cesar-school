#include <stdio.h>
#include <math.h>

int main () {
    const double pi = 3.14159265;
    double raio;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    double area = 4 * pi * pow(raio, 2);
    double volume = (4.0 / 3.0) * pi * pow(raio, 3);

    printf("Área da esfera: %.3lf\n", area);
    printf("Volume da esfera: %.3lf\n", volume);
    return 0;
}

