#include <stdio.h>

int main() {
    int numero_um, numero_dois;

    printf("Digite dois numeros inteiros (coloque espaços entre eles): ");
    scanf("%d %d", &numero_um, &numero_dois);

    int soma = numero_um + numero_dois;
    int subtracao = numero_um - numero_dois;
    int multiplicacao = numero_um * numero_dois;
    float divisao = (float)numero_um / numero_dois;

    printf("a) Soma: %d\n", soma);
    printf("b) Subtracao: %d\n", subtracao);
    printf("c) Multiplicacao: %d\n", multiplicacao);
    printf("d) Divisao: %.2f\n", divisao);

    // Faria uma verificação no numero_dois antes dos calculos para evitar divisão por zero
    // if (numero_dois != 0) {
    //    printf("d) Divisao: %.2f\n", divisao);
    //} else {
    //    printf("d) Divisao: Impossivel dividir por zero.\n");
    //}

}