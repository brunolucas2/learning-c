#include <stdio.h>

int main()
{
    int linhas;

    printf("Insira a quantidade de linhas do triangulo: ");
    scanf("%i", &linhas);

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < 2 * linhas - 1; j++)
        {
            if (j >= linhas - i - 1 && j <= linhas + i - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}