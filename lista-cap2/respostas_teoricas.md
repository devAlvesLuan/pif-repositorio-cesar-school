Respostas teoricas:

Questão 1:
a) 2

b) Quando uma variável for declarada como int, ela não armazena números com casas decimais, pegando apenas a parte inteira.
O nome desse fenômeno é Coerção Implícita de Tipo (ou Implicit Type Casting/Coercion), e o descarte da parte decimal é chamado de Truncamento 
(ou Truncation).

c) Ele tem três opções:
    - Trocar a váriavel para float e trocar o especificador do print pra %f.
    - Explicitar o truncamento:
    int valor_inteiro = (int) 2.97;
    - E arredondando o valor usando a biblioteca <math.h>:
    int valor_inteiro = round(2.97);

Questão 2:
a) Porque perderá a portabilidade com sistemas operacionais em Unix/POSIX, pois essa biblioteca era usada em compiladores antigos
do Windows.

b) Para entrada:
    - scanf("%c", &variavel): Lê um caractere especificado, podendo ler outros tipos de variáveis.
    - getchar(): Lê o próximo caractere do buffer de entrada padrão (stdin).
    - fgetc(stdin): Semelhante ao getchar, mas permite especificar o fluxo de entrada.

   Para saída:
    - printf("%c", variavel): Imprime um caractere formatado.
    - putchar(variavel): Imprime um único caractere no console.
    - fputc(variavel, stdout): Escreve um caractere no fluxo de saída especificado.

c) 
#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    
    // O espaço no scanf antes do %c serve pra ignorar caracteres invisiveis, limpando as quebras de linha do buffer
    scanf(" %c", &caractere); 
    
    printf("O caractere lido foi: %c\n", caractere);

    return 0;
}

Questão 3:
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // O mesmo valor 'numero' é passado 4 vezes para preencher os 4 especificadores
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", numero, numero, numero, numero);

    return 0;
}

Questão 4: 
Em C tem duas regras pra fazer essas expressões:
Precedência - Operadores aritméticos (como +) têm precedência maior que os operadores de atribuição (como =, +=, *=).
Associatividade - A leitura dessas expressões sempre são feitas da direita para a esquerda, ou seja, a operação mais a direita alimenta a da esquerda.

a = 1, b = 2, c = 3, d = 4

a += b + c; // Valor final de a = 6
a += 2 + 3
a += a + 5
a = 1 + 5
a = 6

b *= c = d + 2; // Valores finais de b = 12 e c = 6
b *= c = 4 + 2
b *= c = 6
b = b * 6
b = 2 * 6
b = 12

d %= a + a + a; // Valor final de d = 1
d %= 1 + 1 + 1
d %= 3
d = d % 3
d = 4 % 3
d = 1

d -= c -= b -= a; // Valores finais de d = 2, c = 2 e b = 1
b = b - a
b = 2 - 1
b = 1

c = c - 1 // usando o novo valor de b
c = 3 - 1
c = 2

d = d - 2 // usando o novo valor de c
d = 4 - 2
d = 2

a += b += c += 7; // Valores finais de a = 13, b = 12 e c = 10
c = c + 7
c = 3 + 7
c = 10

b = b + c // usando o novo valor de c
b = 2 + 10
b = 12

a = a + 12 // usando o novo valor de b
a = 1 + 12
a = 13

Questão 5:
a) i < j + 3 => resultado: 1 (verdadeiro)**
1 < 2 + 3 // o operador + resolve antes do <
1 < 5
1

b) 2 * i - 7 <= j - 8 => resultado: 0 (falso)**
2 * 1 - 7 <= 2 - 8 // multiplicação primeiro
2 - 7 <= -6 // subtrações depois
-5 <= -6
0

c) -x + y >= 2.0 * y => resultado: 0 (falso)**
-3.3 + 4.4 >= 2.0 * 4.4 // multiplicação primeiro
-3.3 + 4.4 >= 8.8
1.1 >= 8.8
0

d) x == y => resultado: 0 (falso)**
3.3 == 4.4
0

e) !(n - j) => resultado: 1 (verdadeiro)**
!(2 - 2) // os parênteses resolvem primeiro
!(0) // o operador ! inverte o valor lógico. o oposto de falso (0) é verdadeiro (1).
1

f) !n - j => resultado: -2 (matematicamente) ou 1 (lógico)**
!2 - 2 // o operador ! não tem parênteses, então ele ataca o n primeiro.
0 - 2 // !2 é o oposto de verdadeiro, logo vira 0.
-2 // qualquer valor diferente de 0 automaticamente se torna verdadeiro 

g) i && j && k => resultado: 1 (verdadeiro)**
1 && 2 && 3 // como todos os números são diferentes de 0, todos são "verdadeiros".
1 && 3
1

h) i || j - 3 && k => resultado: 1 (verdadeiro)**
1 || 2 - 3 && 3 // o c resolve por curto-circuito
1 || (qualquer coisa) // como é um operador ou (||) e o lado esquerdo (1) já é verdadeiro, o c ignora o resto da linha.
1

i) i < j && 2 >= k => resultado: 0 (falso)**
1 < 2 && 2 >= 3 // operadores relacionais (< e >=) resolvem antes do &&
1 && 0 // verdadeiro e falso
0

j) i == 2 || j == 4 || k == 5 => resultado: 0 (falso)**
1 == 2 || 2 == 4 || 3 == 5
0 || 0 || 0 // falso ou falso ou falso
0

Questão 6:
a) Diferença e Resultados
Prefixado (++n): Incrementa o valor primeiro, depois faz a atribuição.
Pós-fixado (m++): Atribui o valor original primeiro, depois incrementa.

Trecho A: n = 6, x = 6
Trecho B: m = 6, y = 5

b)
A instrução gera resultados imprevisíveis por dois motivos:

A linguagem C não define a ordem em que os argumentos de uma função (como o printf) são avaliados (pode ser da direita para a esquerda ou vice-versa).

Modificar e ler a mesma variável (n++ e n) na mesma instrução sem uma pausa clara gera comportamento indefinido. Cada compilador pode ler e alterar a variável em momentos diferentes.

