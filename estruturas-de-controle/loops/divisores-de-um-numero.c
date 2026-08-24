#include <stdio.h>

int main()
{
    int numero, soma = 0;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    printf("Divisores:\n");
    for (int i = 1; i < numero + 1; i++)
    {
        if (numero % i == 0)
            printf("%i\n", i);
    }
    
    return 0;
}