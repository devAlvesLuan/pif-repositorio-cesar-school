#include <stdio.h>

int main () {
    int senha = 2026;

    int tentativa, erros = 0;

    while (tentativa != senha && erros < 3) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);

        if (tentativa != senha) {
            printf("Senha incorreta. Tente novamente.\n");
            erros++;
        }
        else if (tentativa == senha) {
            printf("Senha correta. Acesso concedido.\n");

        } 
        else if (erros == 3) {
            printf("Número máximo de tentativas excedido. Acesso negado.\n");

        }

    };

} 