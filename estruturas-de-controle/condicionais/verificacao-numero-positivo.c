#include <stdio.h>

void main() {
    //Declarando a variavel que vai armazenar o numero.
    int number;

    // Pedindo ao usuario o numero.
    printf("Informe um numero: ");
    scanf("%i", &number);

    // Realizando o a verificação para saber se o número e positivo, negativo ou zero.
    // Utilizando if  aninhado.

    // verificando se o numero e 0.
    if (number == 0){
        // Se for igual a 0 e impresso "Zero" no terminal.
        printf("Zero");

    } else {
        // Se o numero não for igual a 0 verifica se ele e maior ou menor que 0.
        
        // Se for mqior, e impresso "Positivo" no terminal.
        if (number > 0) {
            printf("Positivo");

        // Se for menor, e impresso "Negativo" no terminal.
        } else {
            printf("Negativo");
        }
    }
}