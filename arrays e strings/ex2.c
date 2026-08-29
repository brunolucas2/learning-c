#include <stdio.h>

int main()
{
    int testes[][10] = {
        {4, 8, 2, 15, 7, 3, 11, 6, 1, 9},
        {20, 5, 20, 8, 3, 7, 12, 1, 9, 4},
        {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}
    };

    int m;

    for (int a = 0; a < sizeof(testes) / sizeof(testes[0]); a++)
    {
        m = 0;

        for (int b = sizeof(testes[0]) / sizeof(testes[0][0]); b > 0; b--)
        {
            if (testes[a][m] < testes[a][b])
            {
                m = b;
            }
        }

        printf("Teste[%i] - Maior: %d | Indice: %i\n", a,testes[a][m], m);
    }

    return 0;
}