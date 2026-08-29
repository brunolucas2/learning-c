#include <stdio.h>

int main()
{
    int soma = 0;

    int testes[4][10] = {
        {-5, 10, 3, -2, 8, -7, 4, 0, -1, 6},
        {-8, -4, 0, -2, -10, -1, -7, -3, -6, -9},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    for (int i = 0; i < sizeof(testes) / sizeof(testes[0]); i++)
    {
        soma = 0;
        for (int j = sizeof(testes[0]) / sizeof(testes[0][0]) - 1; j >= 0 ; j--)
        {
            if (testes[i][j] > 0)
            {
                soma += testes[i][j];
            }
        }
        printf("1: %d\n", soma);
    }

    return 0;
}