/*
1 - Há uma virgula após o <stdlib.h> que é desnecessária e pode causar erro de compilação.
2 - Esta escrito "Main", porém o correto é "main" com letra minuscula.
3 - O "int Main {}" está incorreto, o correto é "int main(void) {}".
4- Foi colocado () após o as {} do main, sendo que ela precisa ser colocado antes das {}.
5 - O parâmentro dentro do printf está incorreto pois falta as "" para delimitar a string.
6 - A o count é algo especifico do C++, então não é permitido usar o count no C.
7 - Também há a junção do C e C++ no mesmo código, o que não é permitido.
*/

#include <stdio.h> 
#include <stdlib.h>

int main(void) {
    printf( "Existem %d semanas no ano.\n", 52);
    return 0;
}