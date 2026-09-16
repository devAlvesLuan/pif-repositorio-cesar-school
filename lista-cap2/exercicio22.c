#include <stdio.h>

int main() {
    char maiuscula, minuscula;

    printf("Digite uma letra maiúscula: ");
    scanf(" %c", &maiuscula);

    minuscula = maiuscula + 32;

    printf("Letra convertida para minúscula: %c\n", minuscula);

}