#include <stdio.h>

int main()
{
    float testes[][10] = {
        {2, 4, 6, 8, 10, 12, 14, 16, 18, 20},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
        {1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5},
        {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000}
    };

    for (int i = 0; i < sizeof(testes) / sizeof(testes[0]); i++)
    {
        float media = 0;

        for (int m = 0; m < sizeof(testes[0]) / sizeof(testes[0][0]); m++)
        {
            media += testes[i][m];
        }

        media = media / (sizeof(testes[0]) / sizeof(testes[0][0]));

        printf("%.2f\n", media);

        for (int j = 0; j < sizeof(testes[0]) / sizeof(testes[0][0]); j++)
        {
            if (testes[i][j] > media)
            {
                printf("%.2f ", testes[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}