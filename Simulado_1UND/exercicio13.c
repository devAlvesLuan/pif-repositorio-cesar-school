#include <stdio.h>

int main () {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    long long int fatorial = 1;

    for(int i = numero; i >= 1; i--) { 
        if (i == 0) {
            fatorial = 1; // O fatorial de 0 é 1
            break;
        }
        fatorial *= i;

    }
    printf("O fatorial de %d é: %lld\n", numero, fatorial);
}