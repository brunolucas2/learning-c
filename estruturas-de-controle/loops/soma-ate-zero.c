#include <stdio.h>

int main()
{
    int soma = 0, input = 0;

    while (1)
    {
        printf("Informe um numero: ");
        scanf("%i", &input);

        if (input == 0)
        {
            printf("Soma: %i", soma);

            return 0;
        }

        soma += input;
    }
}