#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_secreto = 10, palpite;
    while (1)
    {
        printf("Digite seu palpite: ");
        scanf("%i", &palpite);

        if (palpite == numero_secreto)
        {
            printf("Voce acertou!");
            return 0;
        }

        printf("\n");

        if (palpite > numero_secreto)
            printf("O numero secreto e menor.");
        else
            printf("O numero secreto e maior");
        
        getchar();
        getchar();

        system("cls");
    }
}