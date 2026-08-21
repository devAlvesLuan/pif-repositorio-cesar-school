#include <stdio.h>

int main() {
    const char bloco_cheio = '\xDB';
    const char meio_bloco = '\xDC';

    // Carro
    printf("   %c%c%c\n", bloco_cheio, bloco_cheio, bloco_cheio);

    printf("%c%c%c%c%c%c%c\n",
           bloco_cheio, bloco_cheio, bloco_cheio,
           bloco_cheio, bloco_cheio, bloco_cheio,
           bloco_cheio);

    printf(" %c%c%c%c%c%c%c%c%c\n",
           bloco_cheio, bloco_cheio, bloco_cheio,
           bloco_cheio, bloco_cheio, bloco_cheio,
           bloco_cheio, bloco_cheio, bloco_cheio);

    printf(" %c%c     %c%c\n\n",
           meio_bloco, meio_bloco,
           meio_bloco, meio_bloco);


    // Caminhonete
    printf("   %c %c%c%c%c%c%c\n",
           bloco_cheio,
           bloco_cheio, bloco_cheio, bloco_cheio,
           bloco_cheio, bloco_cheio, bloco_cheio);

    printf("%c%c%c%c%c%c%c%c%c%c%c\n",
           bloco_cheio, bloco_cheio, bloco_cheio,
           bloco_cheio, bloco_cheio, bloco_cheio,
           bloco_cheio, bloco_cheio, bloco_cheio,
           bloco_cheio, bloco_cheio);

    printf(" %c%c     %c%c\n",
           meio_bloco, meio_bloco,
           meio_bloco, meio_bloco);

    return 0;
}