#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

int main()
{
    system("cls");

    // Declaração de variaveis:

    // Variaveis para autenticação do usuario:

    // Variavel que armazena a Senha do usuario inicialisada.
    char user_password[8] = "abc123a\0";
    // Variavel que armazena a senha inserida no terminal.
    char input_password[8];

    // Variavel que recebe as interações do menu.
    int menu;

    // Variavel que armazena o saldo do usuario, e a variavel que armazena temporariamente o deposito realizado.
    double saldo = 1250.00, deposito;

    // Sistema CLI.

    printf("============ Sistema bancario ============\n");
    printf("Insira sua senha para acessar sua conta\n\nSenha: ");
    scanf("%7s", &input_password);

    Sleep(1000);

    system("cls");

    printf("Verificando a senha .....\n\n");

    Sleep(2250);

    // Verificando se a string da senha coletada no terminal e igual a do usuario que está salva na linha "13".
    if (strcmp(input_password, user_password) != 0)
    {
        printf("Senha incorreta!");
        return 1;
    }

    printf("Senha correta!");

    Sleep(1250);

    system("cls");

    /// Menu CLI.
    printf("[1] - Consultar Saldo\n[2] - Fazer deposito\n[3] - Sair\n\nOpcao desejada: ");
    scanf("%i", &menu);

    switch (menu)
    {
    case 1:
        printf("Saldo atual: %.2f\n", saldo);

        Sleep(1000);

        printf("Pressione qualquer tecla para sair");
        scanf("");

        break;

    case 2:
        printf("Informe o valor do deposito: ");
        scanf("%lf", &deposito);

        if (deposito <= 0)
        {
            printf("Nao foi possivel realizar o seu deposito\n");

            Sleep(1000);

            printf("So e possivel realizar depositos com valores acima de 0");

            return 1;
        }

        Sleep(1500);

        saldo += deposito;

        system("cls");

        printf("Deposito realizado com sucesso!\n");

        Sleep(500);

        printf("Saldo atualizado com sucesso: %.2f", saldo);

        Sleep(1250);

        break;

    case 3:
        system("cls");

        printf("Encerrando o sistema . . . .");

        Sleep(1000);

        system("cls");
        
        break;
        
    default:
        printf("Opcao invalida!");

        return 1;
    }

    return 0;
}