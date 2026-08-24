#include <stdio.h>

int main()
{
    int senha = 1234, input, count = 1;

    while (count < 6)
    {
        printf("Digite a senha: ");
        scanf("%i", &input);

        if (input == senha)
        {
            printf("Acesso permitido.");
            return 0;
        }

        if (count == 5) {
            printf("Acesso negado!");
            return 0;
        }
        
        printf("Senha incorreta.\nRestam %i tentativas.", 5 - count);
        count++;
        printf("\n");
    }
}