#include <stdio.h>

int main() {
    float salario_base;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario_base);

    float salario_liquido = salario_base + (salario_base * 0.05) - (salario_base * 0.07);
    printf("O salário líquido do funcionário é: %.2f\n", salario_liquido);

    /* 
     * 1. (salario_base * 0.05): Utiliza o operador de multiplicação (*) para calcular
     *    o adicional da gratificação fixa de 5% (5/100 = 0.05).
     * 
     * 2. (salario_base * 0.07): Calcula a retenção do imposto de 7% (7/100 = 0.07).
     * 
     * 3. Os operadores de soma (+) e subtração (-) aplicam essas taxas ao valor inicial:
     *    Salário Líquido = Salário Base + Gratificação - Imposto
     * 
     * Como o desconto (7%) é maior que o ganho (5%), o funcionário tem uma redução 
     * líquida de 2%, recebendo 98% do salário-base original.
     * 
     * Uma outra forma possivel de se fazer é:
     * float salario_liquido = salario_base * 0.98;
     */
}