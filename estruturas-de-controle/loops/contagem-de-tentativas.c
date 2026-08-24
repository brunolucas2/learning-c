#include <stdio.h>

int main()
{
    int senha = 1234, input, count = 1;

    while (5)
    {
        printf("Digite a senha: ");
        scanf("%i", &input);

        if (input == senha)
        {
            printf("Acesso permitido.");
            return 0;
        }

        printf("Senha incorreta.\nRestam %i tentativas.", 5 - count);
        printf("\n");
    }
}