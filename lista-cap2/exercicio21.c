#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    /*
     * Em C, o tipo 'char' armazena internamente esse código numérico. Quando 
     * usamos %c no printf, o C exibe o símbolo visual. Quando usamos %d, ele 
     * exibe o valor inteiro associado a esse símbolo na memória.
     * Por exemplo, o caractere 'A' tem o código ASCII 65, 'a' tem 97 e '0' tem 48.
     */

    printf("Código ASCII correspondente (em inteiro): %d\n", caractere);

    return 0;
}