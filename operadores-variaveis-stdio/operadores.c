#include <stdio.h>
// incluindo o header stdio (standard input-output header).
// fornecendo a interface tradicional de entrada e saída do C.

int main() {

    // Operadores aritméticos

    int a = 10;
    int b = 3;

    // "+" realiza uma adição.
    int soma = a + b;

    // "-" realiza uma subtração.
    int subtracao = a - b;

    // "*" realiza uma multiplicação.
    int multiplicacao = a * b;

    // "/" realiza uma divisão.
    int divisao = a / b;

    // "%" retorna o resto da divisão.
    int resto = a % b;

    printf("Operadores aritmeticos:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %d\n", divisao);
    printf("Resto: %d\n\n", resto);

    // Operadores de incremento e decremento

    int numero = 10;

    // "++" aumenta o valor da variável em 1.
    numero++;

    printf("Incremento: %d\n", numero);

    // "--" diminui o valor da variável em 1.
    numero--;

    printf("Decremento: %d\n\n", numero);

    
    // Operadores de atribuição

    int valor = 10;

    // "=" atribui um valor à variável.
    valor = 20;

    // "+=" soma um valor à variável.
    valor += 5;

    // "-=" subtrai um valor da variável.
    valor -= 5;

    // "*=" multiplica o valor da variável.
    valor *= 2;

    // "/=" divide o valor da variável.
    valor /= 2;

    // "%=" atribui o resto da divisão à variável.
    valor %= 3;

    printf("Operadores de atribuicao:\n");
    printf("Valor: %d\n\n", valor);


    // Operadores relacionais

    int x = 10;
    int y = 5;

    // "==" verifica se dois valores são iguais.
    printf("Igual: %d\n", x == y);

    // "!=" verifica se dois valores são diferentes.
    printf("Diferente: %d\n", x != y);

    // ">" verifica se o primeiro valor é maior que o segundo.
    printf("Maior: %d\n", x > y);

    // "<" verifica se o primeiro valor é menor que o segundo.
    printf("Menor: %d\n", x < y);

    // ">=" verifica se o primeiro valor é maior ou igual ao segundo.
    printf("Maior ou igual: %d\n", x >= y);

    // "<=" verifica se o primeiro valor é menor ou igual ao segundo.
    printf("Menor ou igual: %d\n\n", x <= y);


    // Operadores lógicos

    int idade = 20;
    int possui_documento = 1;

    // "&&" retorna verdadeiro quando as duas condições são verdadeiras.
    printf("AND: %d\n", idade >= 18 && possui_documento);

    // "||" retorna verdadeiro quando pelo menos uma condição é verdadeira.
    printf("OR: %d\n", idade >= 18 || possui_documento);

    // "!" inverte o valor lógico.
    printf("NOT: %d\n\n", !possui_documento);

    return 0;
}