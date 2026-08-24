#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int op;
    double num1, num2;

    while (1)
    {
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");

        printf("Escolha: ");
        scanf("%i", &op);

        if (op == 5)
        {
            system("cls");
            printf("Saindo ....");
            return 0;
        }

        printf("\n");

        printf("Informe o primeiro numero: ");
        scanf("%lf", &num1);

        printf("Informe o segundo numero: ");
        scanf("%lf", &num2);

        switch (op)
        {
        case 1:
            printf("Resultado da Soma: %.2lf", num1 + num2);
            break;

        case 2:
            printf("Resultado da Subtracao: %.2lf", num1 - num2);
            break;

        case 3:
            printf("Resultado da Multiplicacao: %.2lf", num1 * num2);
            break;

        case 4:
            if (num2 == 0)
                printf("Nao e possivel dividir por zero!");
            else
                printf("Resultado da Divisao: %.2lf", num1 / num2);
            break;

        default:
            printf("Opcao invalida!");
            break;
        }

        printf("\n\n");
        getchar();
        getchar();

        system("cls");
    }

    return 0;
}