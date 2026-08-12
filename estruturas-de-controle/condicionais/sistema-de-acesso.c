#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

// Variavel de nivel de acesso por ID-númerico.
enum nivelAcesso
{
    visitante = 123,
    funcionario = 12345,
    administrador = 1234567,
};

// Variavel com idade Minima permitida no sistema.
int idadeMin = 18;

// Variavel responsavel por armazenar o ID inserido pelo usuario.
int user_id;

int main()
{

    // Variavel que armazena a idade do usuario.
    int idade_usuario;

    system("cls");

    printf("========== Sistema de acesso ==========\n");

    // Solicitando a idade do usuario.
    printf("Informe sua idade: ");
    scanf("%i", &idade_usuario);

    Sleep(500);

    system("cls");

    printf("Verificando idade . . . . .");

    Sleep(1725);

    system("cls");

    // Verificando se a idade inserida pelo usuario e menor que a idade minima definida no sistema.
    // Se for menor o sistema será encerrado
    if (idade_usuario < idadeMin)
    {
        printf("Acesso negado. E necessario ter 18 anos ou mais.");

        return 1;
    }

    // Idade aceita.
    // Sistema deve prosseguir com verificação de nivel do usuario.

    printf("Informe o seu ID\nID: ");
    scanf("%i", &user_id);

    Sleep(500);

    system("cls");

    printf("Verificando o seu ID");

    Sleep(2250);

    system("cls");

    switch (user_id)
    {
    case visitante:
        printf("Senhor(a) visitante, seja muito bem-vindo");;
        break;

    case funcionario:
        printf("Funcionario(a), seja muito bem-vindo");;
        break;
    
    case administrador:
        printf("Administrador(a), seja muito bem-vindo");
        break;

    default:
        printf("ID invalido.");

        return 1;
    }
    
    Sleep(1000);

    return 0;
}