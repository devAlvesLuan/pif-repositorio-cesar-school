#include <stdio.h>

int main(){
    float kilometros_horas;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kilometros_horas);

    float metros_segundos = kilometros_horas / 3.6;

    printf("A velocidade em m/s é: %.2f\n", metros_segundos);

}