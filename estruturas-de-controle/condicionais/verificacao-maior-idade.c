#include <stdio.h>

int main() {
    int idade;

    printf("Informe sua idade: ");
    scanf("%i", idade);

    if (idade >= 18)
        printf("Voce e maior de idade");
    else
        printf("Voce e menor de idade");

    return 0;
}