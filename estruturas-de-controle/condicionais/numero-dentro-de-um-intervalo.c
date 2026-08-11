#include <stdio.h>

int main() {
    int num;

    //Socilicitando o número.
    printf("Informe o número: ");
    scanf("%i", num);

    //verificando se o Número está entre o intervalo de 10 e 50.
    if (num >= 10 && num <= 50) {
        printf("O numero informado está no intervalo entre (10 e 50)");
    }

    return 0;
}