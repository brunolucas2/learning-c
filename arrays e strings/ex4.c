#include <stdio.h>

int main()
{
    int testes[][8] = {
        {10, 20, 30, 40, 50, 60, 70, 80},
        {5, 15, 25, 35, 45, 55, 65, 75},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {9, 8, 7, 6, 5, 4, 3, 2}};

    int index;

    int cols = sizeof(testes[0]) / sizeof(testes[0][0]);
    int rows = sizeof(testes) / sizeof(testes[0]);

    for (int i = 0; i < rows; i++)
    {
        printf("Array: ");

        for (int a = 0; a < cols; a++)
        {
            printf("%i ", testes[i][a]);
        }

        printf("\n");

        printf("Informe a posicao do numero que voce quer que saia: ");
        scanf("%i", &index);

        for (int j = index; j < cols - 1; j++)
        {
            testes[i][j] = testes[i][j + 1];
        }

        printf("Como o array ficou: ");

        for (int k = 0; k < cols; k++)
        {
            printf("%i ", testes[i][k]);
        }

        printf("\n");
    }

    return 0;
}