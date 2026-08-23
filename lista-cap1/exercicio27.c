#include <stdio.h>

int main () {
    int segundos = 0;
    int horas = 0;
    int minutos = 0;


    printf("Escreva um valor em segundos para ser transformado em horas, minutos e segundos: ");
    scanf("%d", &segundos);

    if (segundos > 0){
        int segundos_restantes = 0;

        horas = segundos / 3600;
        segundos_restantes = segundos % 3600;
        minutos = segundos_restantes / 60;
        segundos_restantes = segundos_restantes % 60;

        printf("| %d Horas | %d Minutos | %d Segundos |", horas, minutos, segundos_restantes);

    }
    else {
        printf("Escreva um número maior que 0");
    }

}