Respostas teoricas:

Questão 4:
- Há uma virgula após o <stdlib.h> que é desnecessária e pode causar erro de compilação.
- Esta escrito "Main", porém o correto é "main" com letra minuscula.
- O "int Main {}" está incorreto, o correto é "int main(void) {}".
- Foi colocado () após o as {} do main, sendo que ela precisa ser colocado antes das {}.
- O parâmentro dentro do printf está incorreto pois falta as "" para delimitar a string.
- A o count é algo especifico do C++, então não é permitido usar o count no C.
- Também há a junção do C e C++ no mesmo código, o que não é permitido.

Questão 5:
O código apresenta alguns erros:

A função main está incorreta, faltando atribuir o tipo da variável como int e passar o parâmetro void dentro dos parênteses. 

A linha printf("Linguagem C") não vai funcionar pois não foi incluida a função de saída e entrada de dados: #include <studio.h>

Questão 6:
- Após a declaração das variáveis tem :, o que não é necessário e vai causar erro de compilação.
- No printf falta fechar as aspas.
- E o system("pause") não vai funcionar pois não há inicialização da biblioteca <stdlib.h>

Questão 7:
a)

    Bom dia! Shirley.

b)
Você já tomou café? 


c)


A solução não existe!
Não insista.

d) 
Duas    linhas      de      saída
ou      uma?

e)
um
dois
três


Questão 8:

    "Primeiro Programa"

Questão 9:

No primeiro printf tem três %c:
- o primeiro vai receber o valor \n, o que resulta numa quebra de linha.
- o segundo recebe o valor \t, que resulta em um TAB, ou seja, um espaçamento.
- o terceiro recebe \', a \ vai ser ignorada e apenas a aspas simples vai aparecer na saída.

No segundo printf o %c recebe \", que também a \ vai ser ignorada e apenas as aspas duplas vão aparecer na saída.
Resultando na seguinte saída:

    'Primeiro programa"


Questão 10:

Letra b. O C interpreta como duas váriaveis diferentes, porque o caracter em maisculo é outro código binário, então o codigo-fonte do C também interpreta como outra variável.

Questão 11:

- '\r'     | Constante de caractere         |char
- 2130     | Constante inteira decimal      |int
- -123     | Constante inteira decimal      |int
- 33.28    | Constante de ponto flutuante   |double
- 0XFA     | Constante inteira hexadecimal  |int
- 0101     | Constante inteira octal        |int
- 2.0E30   | Constante de ponto flutuante   |double
- '\xDC'   | Constante de caractere         |char
- '\"'     | Constante de caractere         |char
- '\\'     | Constante de caractere         |char
- 'F'      | Constante de caractere         |char
- O        | É um identificador             |
- '\0'     | Constante de caractere         |char
- "F"      | Constante string               |char[]
- -4567.89 | Constante de ponto flutuante   |double

Questão 12:

- int a;           | Correto   | Esta correto pois int é uma declaração válida  
                                para uma variável, que nesse caso é "a".

- float b;         | Correto   | Esta correto pois int é uma declaração válida  
                                para uma variável, que nesse caso é "a".

- double float c;  | Incorreto | Isso é inválido, double e float são tipos flutuantes
                                diferentes.

- unsigned char d; | Correto   | Correto pois o caracter que for passado para essa variável 
                                não pode conter o sinal de negativo .

- unsigned e;      | Correto   | Correto. Quando não é passado o tipo do unsigned, o C
                                entende que é unsigned int

- long float f;    | Incorreto | Incorreto porque o long não pode ser combinado com float, 
                                apenas com double

- long g;          | Correto   | Quando o long aparece sozinho, o C interpreta como long int

- long double h;   | Correto   | long double é um tipo válido de ponto flutuante com
                                precisão igual ou superior à de double.   

Questão 13:
Alternativa C.

Questão 14:
Alternativa A.

Questão 15:
Alternativa C.

Questão 16:
Alternativa C.

Questão 17:
Da alternativa A a Alternativa C está correto, apenas a alternativa D está errada, visto que está sem os parenteses do printf. O C é bem flexivél com espaçamentos, ou seja, acaba não sendo afetado, não alterando em nada na compilação do programa.

