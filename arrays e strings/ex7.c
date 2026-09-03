#include <stdio.h>

int main()
{
    char palavra[50];

    for (int i = 0; i < (2 * 8) / 4; i++)
    {
        int quantidade_de_caracteres = 0;

        printf("Informe uma palavra: ");
        scanf("%49s", palavra);

        while (palavra[quantidade_de_caracteres] != '\0')
        {
            quantidade_de_caracteres++;
        }

        printf("%d\n", quantidade_de_caracteres);

        char c;
        while (scanf("%c", &c) == 1 && c != '\n')
        {
        }
    }

    return 0;
}