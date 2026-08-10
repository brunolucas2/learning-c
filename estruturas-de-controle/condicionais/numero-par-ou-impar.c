#include <stdio.h>

void main() {
    // Declarando variavel que vai armazenar a entrada o usuario.
    int numero;

    //Solicitando e lendo o numero insiero no terminal.
    printf("Informe um numero: ");
    scanf("%i", &numero);

    // Utilizando a estrutura composta
    // começo verificando se o numero é par
    if (!(numero%2)) {
        printf("Par");
    } else {
        // se o número não for par, automaticamente o progama cai no else e imprime Ímpar no terminal.
        printf("Ímpar");
    }
}