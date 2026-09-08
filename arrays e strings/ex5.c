#include <stdio.h>
int main()
{
    int testes[][10] = {
        {2, 5, 7, 8, 5, 9, 2, 1, 7, 0},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
        {1, 2, 1, 2, 1, 2, 1, 2, 1, 2},
    };

    int rows = sizeof(testes) / sizeof(testes[0]);
    int cols = sizeof(testes[0]) / sizeof(testes[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int ja_apareceu = 0;
            for (int x = 0; x < j; x++)
            {
                if (testes[i][j] == testes[i][x])
                {
                    ja_apareceu = 1;
                    break;
                }
            }
            if (ja_apareceu)
            {
                continue;
            }
            for (int k = j + 1; k < cols; k++)
            {
                if (testes[i][j] == testes[i][k])
                {
                    printf("%d", testes[i][j]);
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}