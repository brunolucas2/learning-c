#include <stdio.h>

int main()
{
    int num, divisores = 0;

    printf("Informe um numero: ");
    scanf("%i", &num);

    for (int i = 1; i < num + 1; i++)
    {
        if (num % i == 0)
            divisores++;
    }

    printf("Quantidade de divisores: %i", divisores);

    return 0;
}