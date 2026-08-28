#include <stdio.h>

int main()
{
    int numeros[10], soma = 0;

    for (int i = 0; i < (sizeof(numeros) / sizeof(numeros[0])); i++)
    {
        printf("Numero: ");
        scanf("%i", &numeros[i]);
    }
    printf("\n");

    for (int j = 0; j < (sizeof(numeros) / sizeof(numeros[0])); j++)
    {
        if (numeros[j] > 0)
        {
            soma += numeros[j];
        }
    }

    printf("Resultado da soma: %d", soma);
    return 0;
}