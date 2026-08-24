#include <stdio.h>

int main()
{
    int linhas;

    printf("Insira a quantidade de linhas que o tringulo deve ter: ");
    scanf("%i", &linhas);

    printf("\n");

    for (int i = 0; i < linhas;  i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}