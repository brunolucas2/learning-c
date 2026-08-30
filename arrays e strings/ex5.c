#include <stdio.h>

int main()
{
    int testes[][10] = {
        {2, 5, 7, 8, 5, 9, 2, 1, 7},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
        {1, 2, 1, 2, 1, 2, 1, 2, 1, 2,}
    };
    int rows = sizeof(testes) / sizeof(testes[0]);
    int cols = sizeof(testes[0]) / sizeof(testes[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = j + 1; k < cols; k++)
            {
                if (testes[i][j] == testes[i][k])
                {
                    printf("%i ", testes[i][k]);
                    break;
                }
            }
        }
    }

    return 0;
}