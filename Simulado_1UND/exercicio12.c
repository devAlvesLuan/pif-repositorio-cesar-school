#include <stdio.h>

int main () {
    float nota;

    do{
        
        printf("Digite a nota do aluno (0 a 10): ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
        } else {
            printf("Nota válida: %.2f\n", nota);
        }

    } while (nota < 0.0 || nota > 10.0);
}