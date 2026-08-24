#include <stdio.h>

int main()
{
    int base, expoente, result = 1;

    printf("Informe a Base: ");
    scanf("%i", &base);

    printf("Informe o Expoente: ");
    scanf("%i", &expoente);

    for (int i = 0; i < expoente; i++)
    {
        result *= base;
    }

    printf("Resultado: %i", result);
}