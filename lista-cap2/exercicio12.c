#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf ("%d", &numero);

    printf("Numero digitado: %d\n", numero);
    printf("Antecessor: %d\n", numero--);
    printf("Sucessor: %d\n", numero++);
    
}