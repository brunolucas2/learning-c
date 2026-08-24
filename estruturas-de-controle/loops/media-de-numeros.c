#include <stdio.h>

int main()
{
    double media, input;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o %i numero: ", i);
        scanf("%lf", &input);

        media += input;
    }

    printf("Media entre os numeros: %.2lf", media / 5);
}