#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Data invertida: %d/0%d/0%d\n", ano, mes, dia);

}