#include <stdio.h>

int main () {
    int dias;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    float salario_bruto = dias * 45.0;
    float salario_liquido = salario_bruto * 0.87;

    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

}