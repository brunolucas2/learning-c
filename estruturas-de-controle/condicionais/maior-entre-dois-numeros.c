#include <stdio.h>

void main() {
    // Declarando as variaveis que vao armazenas os numeros que vao ser comparados.
    int num1, num2;

    // Coleto o primeiro numero
    printf("Informe o primeiro numero: ");
    scanf("%i", &num1);

    // Coleto o segundo numero
    printf("Informe o segundo numero: ");
    scanf("%i", &num2);

    // Começo verificando se eles não são iguals.
    if (!(num1 == num2)) {
        // se não forem iguals:
        // Verifico se o num1 e maior que o num2 e igualmente num2 e maior que num1.
        // É imprimo no terminal qual dos dois e o maior ou menor.
        if (num1 > num2) {
            printf("Maior: %d | Menor: %d", num1, num2);
        }
        else {
            printf("Maior: %d | Menor: %d", num2, num1);
        }
    } else {
        // Se forem iguals imprimo que são iguais no terminal.
        printf("Sao iguals");
    }
}