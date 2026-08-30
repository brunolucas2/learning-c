#include <stdio.h>

int main()
{
    int testes[4][6] = {
        {1, 2, 3, 4, 5, 6},
        {10, 20, 30, 40, 50, 60},
        {7, 7, 7, 7, 7, 7},
        {-1, -2, -3, -4, -5, -6}};
    for (int i = 0; i < sizeof(testes) / sizeof(testes[0]); i++)
    {
        int last = testes[i][sizeof(testes[0]) / sizeof(testes[0][0]) - 1];
        for (int j = sizeof(testes[0]) / sizeof(testes[0][0]) - 1; j > 0; j--)
        {
            testes[i][j] = testes[i][j - 1];
        }
        testes[i][0] = last;
        printf("Teste[%i]:", i);
        for (int k = 0; k < sizeof(testes[0]) / sizeof(testes[0][0]); k++)
        {
            printf(" %i ", testes[i][k]);
        }
        printf("\n");
    }
    return 0;
}