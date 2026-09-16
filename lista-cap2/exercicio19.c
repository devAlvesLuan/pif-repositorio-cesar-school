#include <stdio.h>

int main() {
    int dias_trabalhados;
    float taxa_fixa = 30.0;

    printf("Quantos dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    float salario_bruto = dias_trabalhados * taxa_fixa;
    float salario_liquido = salario_bruto - (salario_bruto * 0.08);

    printf("Salário bruto: %.2f\n", salario_bruto);
    printf("Salário líquido: %.2f\n", salario_liquido);
    
}