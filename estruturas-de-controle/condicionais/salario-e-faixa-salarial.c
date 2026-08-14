#include <stdio.h>
#include <Windows.h>

int main()
{
    system("cls");

    // Variavel responsavel por armazenar o salario do usuario.
    double salario;

    // Variavel Responsavel por armazenar o salario apos ser reajustado.
    double reajusteSalarial;

    // Variavel responsavel por armazenar o valor referente ao reajuste realizado no salario.
    // Para ser utilizado para reajustar o salario ou como informações relacionadas ao mesmo.  
    double valorReajuste;

    // Variavel responsavel por armazenar a opcao do menu escolhida pelo usuario.
    int menu;

    // Variavel Responsavel por armazenar a faixa salarial do usuario.
    int faixaSalarial;

    printf("Informe o seu Salario atual\n");
    printf("Salario: ");
    scanf("%lf", &salario);


   // Apos receber o salario, a estrutura de controle abaixo deve realizar as seguintes tarefas:
   // Medir a faixa salarial baseado no salario do usuario.
   // Realizar um calculo de reajuste salarial dentro da sua faixa salarial; 
    if (salario > 0 && salario <= 1500)
    {
        faixaSalarial = 1;
        valorReajuste = salario * 0.10;
        reajusteSalarial = salario + valorReajuste;
    }
    else if (salario > 1500 && salario <= 3300)
    {
        faixaSalarial = 2;
        valorReajuste = salario * 0.07;
        reajusteSalarial = salario + valorReajuste;
    }
    else
    {
        faixaSalarial = 3;
        valorReajuste = salario * 0.05;
        reajusteSalarial = salario + valorReajuste;
    }


    printf("============Menu============\n");
    printf("[1]Salario original\n");
    printf("[2]Faixa salarial\n");
    printf("[3]Salario após reajuste\n\n");
    printf("escolha: ");
    scanf("%i", &menu);

    system("cls");

    Sleep(500);

    switch (menu)
    {
    case 1:
        printf("Salario original: R$ %.2f", salario);
        break;

    case 2:
        printf("Faixa Salarial: %i", faixaSalarial); 
        break;

    case 3:
        printf("Salario apos reajuste: R$ %.2f\n", reajusteSalarial);
        printf("Valor adicionado apos o reajuste salarial: %.2f", valorReajuste);
        break;

    default:
        printf("Opcao invalida!");
        
        return 1;
    }

    return 0;
}