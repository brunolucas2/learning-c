#include <stdio.h>

int main()
{
    char str[50];
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    // Lê a frase digitada pelo usuário
    fgets(str, sizeof(str), stdin);

    // Percorre cada uma das 5 vogais
    for (int i = 0; i < 5; i++)
    {
        int contador_de_vezes = 0;

        // Percorre a frase contando quantas vezes a vogal aparece
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[j] == vogais[i])
            {
                contador_de_vezes++;
            }
        }

        printf("%i", contador_de_vezes);

        if (i < 4)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}