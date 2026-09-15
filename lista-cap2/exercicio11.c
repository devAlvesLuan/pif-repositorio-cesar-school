#include <stdio.h>  

int main () {
    int angulo;
    
    printf("Digite o angulo em graus: ");
    scanf("%d", &angulo);

    float radiano = angulo * (3.141593f / 180.0f);

    printf("O angulo em radianos e: %.2f\n", radiano);
}