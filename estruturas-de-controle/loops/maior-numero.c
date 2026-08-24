#include <stdio.h>

int main()
{
    int maior = 0, input;
    for(int i = 0; i < 10; i++)
    {
        printf("Informe um numero inteiro: ");
        scanf("%i", &input);

        if (maior < input)
            maior = input;
    }
    printf("Maior numero: %d", maior);
    
    return 0;
}