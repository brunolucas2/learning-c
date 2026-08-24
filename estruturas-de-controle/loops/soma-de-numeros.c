#include <stdio.h>

int main()
{
    double soma = 0;
    double input;

    for (int i = 1; i < 11; i++)
    {
        printf("Informe o %i numero inteiro: ", i);
        scanf("%lf", &input);

        soma += input;
    }

    printf("Resultado: %.2lf", soma);
}