#include <math.h>
#include <stdio.h>

int main () {
    float lado_a, lado_b;

    printf("Digite os valores dos catetos (separados por espaço): ");
    scanf("%f %f", &lado_a, &lado_b);

    float soma_catetos = pow(lado_a, 2) + pow(lado_b, 2);
    float hipotenusa = sqrt(soma_catetos);

    printf("O valor da hipotenusa é: %.2f\n", hipotenusa);

}