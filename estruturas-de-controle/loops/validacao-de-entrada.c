#include <stdio.h>

int main()
{
    int numero;

    while (1)
    {
        printf("Informe um numero entre 1 e 100: ");
        scanf("%i", &numero);

        if (numero >= 1 && numero <= 100)
            printf("Valor valido: ", numero);
        else
        {
            printf("Valor invalido.");
            return 0;
        }

        printf("\n");
    }
}