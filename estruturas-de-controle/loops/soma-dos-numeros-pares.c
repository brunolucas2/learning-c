#include <stdio.h>

int main()
{
    int N, soma = 0;

    printf("Informe o numero que vai representar N vezes que o progama vai rodar: ");
    scanf("%i", &N);

    for (int i = 1; i < N + 1; i++)
    {
        if (!(i % 2))
        {
            soma += i;
        }
    }
    
    printf("Soma dos numeros Pares: %i", soma);

    return 0;
}