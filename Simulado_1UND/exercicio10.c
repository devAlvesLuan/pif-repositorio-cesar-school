#include <stdio.h>

int main () {
    int segundos;

    printf("Digite o valor em segundos: ");
    scanf("%d", &segundos);

    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int segundos_restantes = segundos % 60;

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos_restantes);
}