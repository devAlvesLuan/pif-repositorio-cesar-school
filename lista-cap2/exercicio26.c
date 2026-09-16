#include <stdio.h>

int main() {
    float comprimento, largura;
    float preco_arame;

    printf("Digite o comprimento e a largura do terreno (em metros): ");
    scanf("%f %f", &comprimento, &largura);
    printf("Preço unitário do arame farpado (em reais): ");
    scanf("%f", &preco_arame);

    float perimetro = 2 * (comprimento + largura);
    float qnt_arame = perimetro * 3;
    float preco_total = qnt_arame * preco_arame;

    printf("O total de arame necessário é: %.2f metros\n", qnt_arame);
    printf("O preço total do arame farpado é: R$ %.2f\n", preco_total);

}